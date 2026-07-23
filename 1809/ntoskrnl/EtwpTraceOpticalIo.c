/*
 * XREFs of EtwpTraceOpticalIo @ 0x140311F70
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EtwpGetScsiPassThroughCdb @ 0x14031104C (EtwpGetScsiPassThroughCdb.c)
 */

void __fastcall EtwpTraceOpticalIo(int a1, int a2, __int64 a3, __int64 a4)
{
  char *v4; // r11
  char v8; // r9
  __int64 v9; // rax
  int v10; // eax
  unsigned __int16 v11; // r9
  int *v12; // rax
  ULONG_PTR *ScsiPassThroughCdb; // rax
  char v14; // r10
  unsigned __int64 v15; // rax
  __int16 v16; // dx
  int v17; // ecx
  __int64 v18; // rax
  int v19; // ecx
  int v20; // eax
  unsigned __int16 v21; // r14
  int v22; // edx
  __int64 v23; // rax
  int v24; // eax
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // edx
  int v29; // r10d
  __int64 *v30; // r9
  int v31; // [rsp+30h] [rbp-39h] BYREF
  int v32; // [rsp+34h] [rbp-35h]
  int v33; // [rsp+38h] [rbp-31h]
  int v34; // [rsp+3Ch] [rbp-2Dh]
  unsigned __int64 v35; // [rsp+40h] [rbp-29h]
  __int64 v36; // [rsp+48h] [rbp-21h]
  __int64 v37; // [rsp+50h] [rbp-19h]
  __int64 v38; // [rsp+58h] [rbp-11h]
  int v39; // [rsp+60h] [rbp-9h]
  int v40; // [rsp+68h] [rbp-1h] BYREF
  int v41; // [rsp+6Ch] [rbp+3h]
  __int64 v42; // [rsp+70h] [rbp+7h]
  __int64 v43; // [rsp+78h] [rbp+Fh]
  int v44; // [rsp+80h] [rbp+17h]
  int *v45; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v46; // [rsp+90h] [rbp+27h]

  v4 = *(char **)(a3 + 184);
  v8 = *v4;
  if ( (unsigned __int8)(*v4 - 3) <= 1u )
  {
    v33 = *(_DWORD *)(a3 + 56);
    v31 = a2;
    v37 = a3;
    v21 = (v8 != 3) + 311;
    v22 = *(_DWORD *)(a3 + 16);
    v32 = v22;
    v35 = *((_QWORD *)v4 + 3);
    v23 = *(_QWORD *)(a3 + 152);
    v38 = a4;
    v34 = 0;
    if ( v23 )
      v24 = *(_DWORD *)(v23 + 1600);
    else
      v24 = -1;
    v39 = v24;
    if ( (a1 & 0xFFFF0000) == 0x56530000 )
    {
      v34 = 1;
    }
    else
    {
      v25 = a1 & 0xFFFFFF;
      if ( v25 == 5467492 || v25 == 5460546 )
        v34 = 2;
    }
    if ( (v22 & 8) != 0 )
    {
      v26 = *(_QWORD *)(a3 + 24);
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 192);
        if ( v27 )
          goto LABEL_38;
        v27 = *(_QWORD *)(*(_QWORD *)(v26 + 184) + 48LL);
LABEL_37:
        if ( v27 )
          goto LABEL_38;
      }
    }
    else
    {
      v27 = *(_QWORD *)(a3 + 192);
      if ( v27 )
      {
LABEL_38:
        v36 = *(_QWORD *)(v27 + 24);
LABEL_40:
        v46 = 52LL;
        v11 = v21;
        goto LABEL_41;
      }
      v28 = *(unsigned __int8 *)(a3 + 67);
      v29 = *(char *)(a3 + 66);
      if ( v28 <= v29 )
      {
        v30 = (__int64 *)(v4 + 48);
        while ( 1 )
        {
          v27 = *v30;
          if ( *v30 )
            goto LABEL_38;
          LOBYTE(v28) = v28 + 1;
          v30 += 9;
          if ( (unsigned __int8)v28 > v29 )
            goto LABEL_37;
        }
      }
    }
    v36 = 0LL;
    goto LABEL_40;
  }
  if ( v8 == 9 )
  {
    v41 = *(_DWORD *)(a3 + 16);
    v9 = *(_QWORD *)(a3 + 152);
LABEL_4:
    v43 = a3;
    v42 = a4;
    v40 = a2;
    if ( v9 )
      v10 = *(_DWORD *)(v9 + 1600);
    else
      v10 = -1;
    v44 = v10;
    v11 = 313;
    v12 = &v40;
    v46 = 28LL;
    goto LABEL_42;
  }
  if ( v8 == 14 )
  {
    ScsiPassThroughCdb = EtwpGetScsiPassThroughCdb((IRP *)a3);
    if ( ScsiPassThroughCdb )
    {
      v14 = *(_BYTE *)ScsiPassThroughCdb;
      v15 = (*((unsigned __int8 *)ScsiPassThroughCdb + 5) | (unsigned __int64)((*((unsigned __int8 *)ScsiPassThroughCdb
                                                                                + 4) | ((*((unsigned __int8 *)ScsiPassThroughCdb
                                                                                         + 3) | (*((unsigned __int8 *)ScsiPassThroughCdb
                                                                                                 + 2) << 8)) << 8)) << 8)) << 11;
      if ( ((v14 - 40) & 0x7F) != 0 )
      {
        if ( ((v14 - 42) & 0x7F) != 0 )
        {
          if ( v14 != 53 )
            return;
          v41 = *(_DWORD *)(a3 + 16);
          v9 = *(_QWORD *)(a3 + 152);
          goto LABEL_4;
        }
        v16 = 312;
      }
      else
      {
        v16 = 311;
      }
      v17 = *(_DWORD *)(a3 + 16);
      v35 = v15;
      v18 = *(_QWORD *)(a3 + 152);
      v32 = v17;
      v19 = *(_DWORD *)(a3 + 56);
      v31 = a2;
      v37 = a3;
      v33 = v19;
      v38 = a4;
      v34 = 0;
      v36 = 0LL;
      if ( v18 )
        v20 = *(_DWORD *)(v18 + 1600);
      else
        v20 = -1;
      v39 = v20;
      v11 = v16;
      v46 = 28LL;
LABEL_41:
      v12 = &v31;
LABEL_42:
      v45 = v12;
      EtwTraceKernelEvent((__int64)&v45, 1u, 0x80000001, v11, 0x401803u);
    }
  }
}
