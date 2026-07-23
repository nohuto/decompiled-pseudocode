/*
 * XREFs of IopGetBootDiskInformationLite @ 0x1409F9DC4
 * Callers:
 *     IoGetBootDiskInformationLite @ 0x140756FF0 (IoGetBootDiskInformationLite.c)
 * Callees:
 *     IopVerifierExAllocatePool_0 @ 0x1400884F4 (IopVerifierExAllocatePool_0.c)
 *     RtlInitAnsiString @ 0x1400E5090 (RtlInitAnsiString.c)
 *     IopCheckDiskName @ 0x140189768 (IopCheckDiskName.c)
 *     IopAddBootDiskInformation @ 0x140189B1C (IopAddBootDiskInformation.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     VhdiGetDiskParameters @ 0x140A3ECC0 (VhdiGetDiskParameters.c)
 */

__int64 __fastcall IopGetBootDiskInformationLite(unsigned int **a1)
{
  int DiskParameters; // r14d
  int v3; // edx
  _QWORD *v4; // r9
  _QWORD *v5; // r8
  SIZE_T v6; // rbx
  unsigned int *Pool_0; // rax
  unsigned int *v8; // rdi
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  unsigned int v11; // r15d
  __int16 *v12; // rsi
  int *v13; // r12
  bool v14; // zf
  __int64 v15; // rcx
  int v17; // ecx
  __int128 v18; // xmm0
  _BYTE v19[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v20; // [rsp+34h] [rbp-CCh] BYREF
  char v21; // [rsp+36h] [rbp-CAh]
  ULONG v22; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v24; // [rsp+48h] [rbp-B8h]
  int v25; // [rsp+58h] [rbp-A8h]
  __int128 *v26; // [rsp+60h] [rbp-A0h] BYREF
  _STRING v27; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v28[8]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v29[36]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v30[4]; // [rsp+110h] [rbp+10h] BYREF
  _STRING DestinationString; // [rsp+120h] [rbp+20h] BYREF
  _STRING v32; // [rsp+130h] [rbp+30h] BYREF
  _STRING v33; // [rsp+140h] [rbp+40h] BYREF

  v30[0] = 536871168;
  v20 = 0;
  v21 = 0;
  v23 = 0LL;
  v24 = 0uLL;
  v25 = 0;
  *(_QWORD *)&v27.Length = 0LL;
  v27.Buffer = 0LL;
  v30[1] = 538968064;
  v30[2] = 0x20000000;
  memset(v29, 0, sizeof(v29));
  v22 = 0;
  DiskParameters = 0;
  v26 = 0LL;
  RtlInitAnsiString(&DestinationString, *(PCSZ *)(KeLoaderBlock_0 + 184));
  RtlInitAnsiString(&v32, *(PCSZ *)(KeLoaderBlock_0 + 192));
  RtlInitAnsiString(&v33, *(PCSZ *)(KeLoaderBlock_0 + 336));
  v3 = 3;
  v4 = *(_QWORD **)(KeLoaderBlock_0 + 232);
  v5 = (_QWORD *)*v4;
  while ( v5 != v4 )
  {
    v14 = v5[7] == 0LL;
    v17 = v3 + 1;
    v5 = (_QWORD *)*v5;
    if ( v14 )
      v17 = v3;
    v3 = v17;
  }
  v6 = (unsigned int)(28 * v3 + 4);
  Pool_0 = (unsigned int *)IopVerifierExAllocatePool_0(NonPagedPoolNx, v6);
  v8 = Pool_0;
  if ( Pool_0 )
  {
    memset(Pool_0, 0, (unsigned int)v6);
    v9 = *(_QWORD **)(KeLoaderBlock_0 + 232);
    v10 = (_QWORD *)*v9;
    if ( (_QWORD *)*v9 != v9 )
    {
      do
      {
        RtlInitAnsiString(&v27, (PCSZ)v10[3]);
        v11 = 0;
        v12 = &v20;
        v13 = v30;
        do
        {
          if ( !*(_BYTE *)v12 && IopCheckDiskName(&v27, &DestinationString + v11, &v22) )
          {
            v14 = *((_BYTE *)v10 + 38) == 0;
            HIDWORD(v23) = v22;
            v25 = *v13;
            *(_BYTE *)v12 = 1;
            if ( v14 )
            {
              LODWORD(v23) = 0;
              v24 = 0uLL;
              LODWORD(v24) = *((_DWORD *)v10 + 4);
            }
            else
            {
              v18 = *(_OWORD *)(v10 + 5);
              LODWORD(v23) = 1;
              v24 = v18;
            }
            IopAddBootDiskInformation(v8, (__int64)&v23);
          }
          ++v11;
          v12 = (__int16 *)((char *)v12 + 1);
          ++v13;
        }
        while ( v11 < 3 );
        v15 = v10[7];
        if ( v15 )
        {
          DiskParameters = VhdiGetDiskParameters(v15, v29, &v26, v19, v28);
          if ( DiskParameters >= 0 )
          {
            if ( !v19[0] )
            {
              v23 = __PAIR64__(v29[6], v29[0]);
              v25 = 0x400000;
              if ( v29[0] )
              {
                if ( v29[0] == 1 )
                  v24 = *v26;
              }
              else
              {
                v24 = 0uLL;
                LODWORD(v24) = *(_DWORD *)v26;
              }
              IopAddBootDiskInformation(v8, (__int64)&v23);
            }
          }
          else
          {
            DiskParameters = 0;
          }
        }
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != *(_QWORD **)(KeLoaderBlock_0 + 232) );
    }
    *a1 = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)DiskParameters;
}
