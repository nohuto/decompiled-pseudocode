/*
 * XREFs of EtwTraceJobSetQuery @ 0x1408B8AB8
 * Callers:
 *     NtQueryInformationJobObject @ 0x1405FF8F0 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 *     PspSetNetRateControl @ 0x14088B94C (PspSetNetRateControl.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1408B9270 (EtwpCopyJobGuidSafe.c)
 */

void __fastcall EtwTraceJobSetQuery(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int16 v7; // r9
  int v8; // r10d
  _DWORD *v9; // r11
  unsigned int v10; // edx
  __int64 v11; // r10
  __int64 v12; // r11
  char **v13; // rbx
  _QWORD *v14; // rax
  __int64 *v15; // rdi
  __int64 *v16; // rsi
  _QWORD *v17; // r14
  unsigned __int64 **v18; // r15
  unsigned __int64 **v19; // r12
  _QWORD *v20; // r13
  _QWORD *v21; // r9
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  _QWORD *v24; // r9
  _QWORD *v25; // r9
  _QWORD *v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // r8
  _QWORD *v29; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD *v30; // [rsp+40h] [rbp-C8h]
  _QWORD *v31; // [rsp+48h] [rbp-C0h]
  _QWORD *v32; // [rsp+50h] [rbp-B8h]
  _QWORD *v33; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v34; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v35; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v36[16]; // [rsp+70h] [rbp-98h] BYREF
  int v37; // [rsp+80h] [rbp-88h]
  int v38; // [rsp+84h] [rbp-84h]
  _QWORD v39[2]; // [rsp+88h] [rbp-80h] BYREF
  char *v40; // [rsp+98h] [rbp-70h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-68h]
  __int64 v42; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-58h]
  __int64 v44; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-48h]
  _QWORD v46[2]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v47[2]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v48[2]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v49[2]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v50[2]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v51[2]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v52[2]; // [rsp+128h] [rbp+20h] BYREF
  _QWORD v53[2]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v54[2]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v55[2]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v56[2]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v57[8]; // [rsp+178h] [rbp+70h] BYREF

  EtwpCopyJobGuidSafe(v36, a1);
  if ( v5 )
    v37 = *(_DWORD *)(v5 + 1220);
  else
    v37 = 0;
  v38 = v8;
  v39[0] = v36;
  v39[1] = 24LL;
  if ( v7 == 1829 )
  {
    switch ( v8 )
    {
      case 12:
        v10 = 13;
        v29 = v50;
        v13 = &v40;
        v30 = v51;
        v15 = &v42;
        v31 = v52;
        v16 = &v44;
        v32 = v53;
        v17 = v46;
        v14 = v54;
        v18 = (unsigned __int64 **)v47;
        v19 = (unsigned __int64 **)v48;
        v20 = v49;
        v11 = v6 + 8;
        v12 = v6 + 16;
        break;
      case 15:
        v40 = (char *)v6;
        v42 = v6 + 4;
        v10 = 3;
        v41 = 4LL;
        v7 = 1836;
        v43 = 4LL;
        goto LABEL_18;
      case 32:
        v40 = (char *)v6;
        v29 = v53;
        v11 = v6 + 8;
        v41 = 4LL;
        v30 = v54;
        v12 = v6 + 16;
        v42 = v6 + 8;
        v31 = v55;
        v10 = 16;
        v43 = 8LL;
        v32 = v56;
        v13 = (char **)v46;
        v14 = v57;
        v44 = v6 + 16;
        v45 = 1LL;
        v15 = v47;
        v16 = v48;
        v17 = v49;
        v18 = (unsigned __int64 **)v50;
        v19 = (unsigned __int64 **)v51;
        v20 = v52;
        break;
      default:
        return;
    }
    *((_DWORD *)v13 + 3) = 0;
    v21 = v29;
    *((_DWORD *)v13 + 2) = 4;
    v33 = v14;
    *v13 = (char *)(v6 + 40);
    v22 = *(_QWORD *)(v6 + 48);
    *v15 = v6;
    v15[1] = 8LL;
    *v16 = v11;
    v16[1] = 8LL;
    *v17 = v12;
    v17[1] = 8LL;
    v18[1] = (unsigned __int64 *)8;
    v34 = v22 >> 12;
    *v18 = &v34;
    v23 = *(_QWORD *)(v6 + 24);
    v19[1] = (unsigned __int64 *)8;
    v35 = v23 >> 12;
    *v19 = &v35;
    *v20 = v6 + 32;
    v20[1] = 4LL;
    *v21 = v6 + 36;
    v21[1] = 4LL;
    v24 = v30;
    *v30 = v6 + 44;
    v24[1] = 4LL;
    v25 = v31;
    *v31 = v6 + 56;
    v25[1] = 4LL;
    v26 = v32;
    *v32 = v6 + 60;
    v27 = v6 + 64;
    v28 = v33;
    v26[1] = 4LL;
    v7 = 1833;
    *v28 = v27;
    v28[1] = 4LL;
    goto LABEL_18;
  }
  if ( v7 == 1830 )
  {
    if ( v8 != 13 )
      return;
    v40 = (char *)v6;
    v42 = v6 + 4;
    v10 = 19;
    v41 = 4LL;
    v44 = v6 + 8;
    v7 = 1835;
    v43 = 4LL;
    v46[0] = v6 + 16;
    v47[0] = v6 + 24;
    v48[0] = v6 + 32;
    v49[0] = v6 + 40;
    v50[0] = v6 + 48;
    v51[0] = v6 + 56;
    v52[0] = v6 + 80;
    v53[0] = v6 + 64;
    v54[0] = v6 + 72;
    v55[0] = v6 + 76;
    v56[0] = v6 + 88;
    v57[0] = v6 + 92;
    v57[2] = v6 + 96;
    v57[4] = v6 + 100;
    LODWORD(v29) = *v9;
    v57[6] = &v29;
    v45 = 8LL;
    v46[1] = 8LL;
    v47[1] = 8LL;
    v48[1] = 8LL;
    v49[1] = 8LL;
    v50[1] = 8LL;
    v51[1] = 8LL;
    v52[1] = 8LL;
    v53[1] = 8LL;
    v54[1] = 4LL;
    v55[1] = 4LL;
    v56[1] = 4LL;
    v57[1] = 4LL;
    v57[3] = 4LL;
    v57[5] = 4LL;
    v57[7] = 4LL;
    goto LABEL_18;
  }
  if ( v7 > 0x726u && v7 <= 0x728u )
  {
    v41 = 4LL;
    v40 = &a5;
    v10 = 2;
LABEL_18:
    EtwTraceKernelEvent((__int64)v39, v10, 0x80000u, v7, 0x501904u);
  }
}
