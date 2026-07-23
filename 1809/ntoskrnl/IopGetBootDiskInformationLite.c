/*
 * XREFs of IopGetBootDiskInformationLite @ 0x1409BEED8
 * Callers:
 *     IoGetBootDiskInformationLite @ 0x14072DCB0 (IoGetBootDiskInformationLite.c)
 * Callees:
 *     IopVerifierExAllocatePool_0 @ 0x1400DD8DC (IopVerifierExAllocatePool_0.c)
 *     RtlInitAnsiString @ 0x1400EEE10 (RtlInitAnsiString.c)
 *     IopCheckDiskName @ 0x14017FC80 (IopCheckDiskName.c)
 *     IopAddBootDiskInformation @ 0x14017FE64 (IopAddBootDiskInformation.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     VhdiGetDiskParameters @ 0x1409FA138 (VhdiGetDiskParameters.c)
 */

__int64 __fastcall IopGetBootDiskInformationLite(unsigned int **a1)
{
  int DiskParameters; // r14d
  const CHAR *v3; // rdx
  int v4; // edx
  _QWORD *v5; // r9
  _QWORD *v6; // r8
  SIZE_T v7; // rbx
  unsigned int *Pool_0; // rax
  unsigned int *v9; // rdi
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  unsigned int v12; // r15d
  __int16 *v13; // rsi
  int *v14; // r12
  bool v15; // zf
  __int64 v16; // rcx
  int v18; // ecx
  __int128 v19; // xmm0
  _BYTE v20[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v21; // [rsp+34h] [rbp-CCh] BYREF
  char v22; // [rsp+36h] [rbp-CAh]
  ULONG v23; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v25; // [rsp+44h] [rbp-BCh]
  __int128 v26; // [rsp+48h] [rbp-B8h]
  int v27; // [rsp+58h] [rbp-A8h]
  __int128 *v28; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v29[8]; // [rsp+68h] [rbp-98h] BYREF
  _STRING v30; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v31[36]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v32[4]; // [rsp+110h] [rbp+10h] BYREF
  _STRING DestinationString; // [rsp+120h] [rbp+20h] BYREF
  _STRING v34; // [rsp+130h] [rbp+30h] BYREF
  _STRING v35; // [rsp+140h] [rbp+40h] BYREF

  v23 = 0;
  v28 = 0LL;
  v32[0] = 536871168;
  DiskParameters = 0;
  v3 = *(const CHAR **)(KeLoaderBlock_0 + 184);
  v32[1] = 538968064;
  v32[2] = 0x20000000;
  v21 = 0;
  v22 = 0;
  RtlInitAnsiString(&DestinationString, v3);
  RtlInitAnsiString(&v34, *(PCSZ *)(KeLoaderBlock_0 + 192));
  RtlInitAnsiString(&v35, *(PCSZ *)(KeLoaderBlock_0 + 336));
  v4 = 3;
  v5 = *(_QWORD **)(KeLoaderBlock_0 + 232);
  v6 = (_QWORD *)*v5;
  while ( v6 != v5 )
  {
    v15 = v6[7] == 0LL;
    v18 = v4 + 1;
    v6 = (_QWORD *)*v6;
    if ( v15 )
      v18 = v4;
    v4 = v18;
  }
  v7 = (unsigned int)(28 * v4 + 4);
  Pool_0 = (unsigned int *)IopVerifierExAllocatePool_0(NonPagedPoolNx, v7);
  v9 = Pool_0;
  if ( Pool_0 )
  {
    memset(Pool_0, 0, (unsigned int)v7);
    v10 = *(_QWORD **)(KeLoaderBlock_0 + 232);
    v11 = (_QWORD *)*v10;
    if ( (_QWORD *)*v10 != v10 )
    {
      do
      {
        RtlInitAnsiString(&v30, (PCSZ)v11[3]);
        v12 = 0;
        v13 = &v21;
        v14 = v32;
        do
        {
          if ( !*(_BYTE *)v13 && IopCheckDiskName(&v30, &DestinationString + v12, &v23) )
          {
            v15 = *((_BYTE *)v11 + 38) == 0;
            v25 = v23;
            v27 = *v14;
            *(_BYTE *)v13 = 1;
            if ( v15 )
            {
              v24 = 0;
              v26 = 0uLL;
              LODWORD(v26) = *((_DWORD *)v11 + 4);
            }
            else
            {
              v19 = *(_OWORD *)(v11 + 5);
              v24 = 1;
              v26 = v19;
            }
            IopAddBootDiskInformation(v9, (__int64)&v24);
          }
          ++v12;
          v13 = (__int16 *)((char *)v13 + 1);
          ++v14;
        }
        while ( v12 < 3 );
        v16 = v11[7];
        if ( v16 )
        {
          DiskParameters = VhdiGetDiskParameters(v16, v31, &v28, v20, v29);
          if ( DiskParameters >= 0 )
          {
            if ( !v20[0] )
            {
              v24 = v31[0];
              v25 = v31[6];
              v27 = 0x400000;
              if ( v31[0] )
              {
                if ( v31[0] == 1 )
                  v26 = *v28;
              }
              else
              {
                v26 = 0uLL;
                LODWORD(v26) = *(_DWORD *)v28;
              }
              IopAddBootDiskInformation(v9, (__int64)&v24);
            }
          }
          else
          {
            DiskParameters = 0;
          }
        }
        v11 = (_QWORD *)*v11;
      }
      while ( v11 != *(_QWORD **)(KeLoaderBlock_0 + 232) );
    }
    *a1 = v9;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)DiskParameters;
}
