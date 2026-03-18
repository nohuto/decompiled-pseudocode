/*
 * XREFs of EtwpTraceOpticalIo @ 0x14032FEB0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwpGetScsiPassThroughCdb @ 0x14032EDCC (EtwpGetScsiPassThroughCdb.c)
 */

void __fastcall EtwpTraceOpticalIo(int a1, int a2, __int64 a3, __int64 a4)
{
  char *v4; // r15
  char v9; // cl
  __int64 v10; // rax
  int v11; // eax
  unsigned __int16 v12; // r9
  _QWORD *v13; // rax
  ULONG_PTR *ScsiPassThroughCdb; // rax
  char v15; // r10
  unsigned __int64 v16; // rax
  __int16 v17; // dx
  int v18; // ecx
  __int64 v19; // rax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned __int16 v22; // r11
  int v23; // ecx
  __int64 v24; // rax
  int v25; // eax
  int v26; // esi
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // edx
  int v30; // r10d
  __int64 *v31; // r9
  _QWORD v32[7]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v33[4]; // [rsp+68h] [rbp-1h] BYREF
  _QWORD *v34; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v35; // [rsp+90h] [rbp+27h]

  v4 = *(char **)(a3 + 184);
  v34 = 0LL;
  v35 = 0LL;
  memset(v33, 0, sizeof(v33));
  memset(v32, 0, sizeof(v32));
  v9 = *v4;
  if ( (unsigned __int8)(*v4 - 3) <= 1u )
  {
    v32[1] = *(unsigned int *)(a3 + 56);
    LODWORD(v32[0]) = a2;
    v32[4] = a3;
    v22 = (v9 != 3) + 311;
    v23 = *(_DWORD *)(a3 + 16);
    HIDWORD(v32[0]) = v23;
    v32[2] = *((_QWORD *)v4 + 3);
    v24 = *(_QWORD *)(a3 + 152);
    v32[5] = a4;
    if ( v24 )
      v25 = *(_DWORD *)(v24 + 1616);
    else
      v25 = -1;
    LODWORD(v32[6]) = v25;
    if ( (a1 & 0xFFFF0000) == 0x56530000 )
    {
      HIDWORD(v32[1]) = 1;
    }
    else
    {
      v26 = a1 & 0xFFFFFF;
      if ( v26 == 5467492 || v26 == 5460546 )
        HIDWORD(v32[1]) = 2;
    }
    if ( (v23 & 8) != 0 )
    {
      v27 = *(_QWORD *)(a3 + 24);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 192);
        if ( v28 )
          goto LABEL_37;
        v28 = *(_QWORD *)(*(_QWORD *)(v27 + 184) + 48LL);
LABEL_36:
        if ( v28 )
          goto LABEL_37;
      }
    }
    else
    {
      v28 = *(_QWORD *)(a3 + 192);
      if ( v28 )
      {
LABEL_37:
        v32[3] = *(_QWORD *)(v28 + 24);
LABEL_39:
        v35 = 52LL;
        v12 = v22;
        goto LABEL_40;
      }
      v29 = *(unsigned __int8 *)(a3 + 67);
      v30 = *(char *)(a3 + 66);
      if ( v29 <= v30 )
      {
        v31 = (__int64 *)(v4 + 48);
        while ( 1 )
        {
          v28 = *v31;
          if ( *v31 )
            goto LABEL_37;
          LOBYTE(v29) = v29 + 1;
          v31 += 9;
          if ( (unsigned __int8)v29 > v30 )
            goto LABEL_36;
        }
      }
    }
    v32[3] = 0LL;
    goto LABEL_39;
  }
  if ( v9 == 9 )
  {
LABEL_3:
    HIDWORD(v33[0]) = *(_DWORD *)(a3 + 16);
    v10 = *(_QWORD *)(a3 + 152);
    LODWORD(v33[0]) = a2;
    v33[1] = a4;
    v33[2] = a3;
    if ( v10 )
      v11 = *(_DWORD *)(v10 + 1616);
    else
      v11 = -1;
    LODWORD(v33[3]) = v11;
    v12 = 313;
    v13 = v33;
    v35 = 28LL;
    goto LABEL_41;
  }
  if ( v9 == 14 )
  {
    ScsiPassThroughCdb = EtwpGetScsiPassThroughCdb((IRP *)a3);
    if ( ScsiPassThroughCdb )
    {
      v15 = *(_BYTE *)ScsiPassThroughCdb;
      v16 = (*((unsigned __int8 *)ScsiPassThroughCdb + 5) | (unsigned __int64)((*((unsigned __int8 *)ScsiPassThroughCdb
                                                                                + 4) | ((*((unsigned __int8 *)ScsiPassThroughCdb
                                                                                         + 3) | (*((unsigned __int8 *)ScsiPassThroughCdb
                                                                                                 + 2) << 8)) << 8)) << 8)) << 11;
      if ( ((v15 - 40) & 0x7F) != 0 )
      {
        if ( ((v15 - 42) & 0x7F) != 0 )
        {
          if ( v15 != 53 )
            return;
          goto LABEL_3;
        }
        v17 = 312;
      }
      else
      {
        v17 = 311;
      }
      v18 = *(_DWORD *)(a3 + 16);
      v32[2] = v16;
      v19 = *(_QWORD *)(a3 + 152);
      HIDWORD(v32[0]) = v18;
      v20 = *(_DWORD *)(a3 + 56);
      LODWORD(v32[0]) = a2;
      v32[4] = a3;
      v32[1] = v20;
      v32[5] = a4;
      v32[3] = 0LL;
      if ( v19 )
        v21 = *(_DWORD *)(v19 + 1616);
      else
        v21 = -1;
      LODWORD(v32[6]) = v21;
      v12 = v17;
      v35 = 28LL;
LABEL_40:
      v13 = v32;
LABEL_41:
      v34 = v13;
      EtwTraceKernelEvent((__int64)&v34, 1u, 0x80000001, v12, 0x401803u);
    }
  }
}
