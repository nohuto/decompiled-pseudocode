/*
 * XREFs of ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C00803CC
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C007E678 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006B1C0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0072E38 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bSupportsJPEG@XDCOBJ@@QEAAHXZ @ 0x1C0080A08 (-bSupportsJPEG@XDCOBJ@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall iCheckPassthroughImage(
        struct DCOBJ *this,
        struct PDEVOBJ *a2,
        int a3,
        int a4,
        int *a5,
        unsigned int a6,
        _DWORD *a7)
{
  int v7; // r9d
  int v10; // edi
  unsigned int v11; // r14d
  unsigned int v12; // r10d
  __int64 v13; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rbx
  _DWORD *XlateObject; // rax
  __int64 v19; // rdx
  _QWORD *v20; // r10
  __int64 v21; // [rsp+30h] [rbp-C8h]
  __int64 v22; // [rsp+38h] [rbp-C0h]
  __int64 v23; // [rsp+40h] [rbp-B8h]
  __int64 v24; // [rsp+50h] [rbp-A8h]
  _DWORD *v25; // [rsp+58h] [rbp-A0h]
  _DWORD *v26; // [rsp+60h] [rbp-98h] BYREF
  __int64 v27; // [rsp+68h] [rbp-90h] BYREF
  int v28; // [rsp+70h] [rbp-88h]
  int v29; // [rsp+78h] [rbp-80h]
  _QWORD v30[10]; // [rsp+80h] [rbp-78h] BYREF

  v7 = a3;
  v10 = 0;
  v11 = 0;
  v12 = 8;
  if ( a3 == 8 )
  {
    v29 = *a5;
    if ( v29 == 4119 )
    {
      if ( (unsigned int)XDCOBJ::bSupportsJPEG(this) )
        return *(_QWORD *)(*(_QWORD *)a2 + 3296LL) != 0LL;
    }
    else
    {
      v13 = *(_QWORD *)this;
      if ( (*(_DWORD *)(*(_QWORD *)this + 76LL) & 8) != 0 && *(_DWORD *)(v13 + 32) != 1 )
        return *(_QWORD *)(*(_QWORD *)a2 + 3296LL) != 0LL;
    }
    return v11;
  }
  if ( !*(_QWORD *)(*(_QWORD *)a2 + 3296LL) )
    return v11;
  if ( a6 < 4 || !a7 )
    return (unsigned int)-1;
  v15 = *(_QWORD *)this;
  v16 = *(_QWORD *)(*(_QWORD *)this + 496LL);
  if ( v16 )
    v24 = *(_QWORD *)(v16 + 128);
  else
    v24 = 0LL;
  v17 = *(_QWORD *)(v15 + 88);
  v28 = 0;
  v27 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( (v7 != 4119 || !(unsigned int)XDCOBJ::bSupportsJPEG(this))
    && (v7 != 4120 || ((unsigned __int8)*(_DWORD *)(v15 + 76) & (unsigned __int8)v12) == 0 || *(_DWORD *)(v15 + 32) == 1)
    || !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v27, v12, 0, 0LL, 0, 0, 0, 0x200u, 1) )
  {
    goto LABEL_24;
  }
  LODWORD(v23) = 0xFFFFFF;
  LODWORD(v22) = 0;
  LODWORD(v21) = 0;
  XlateObject = CreateXlateObject(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 248LL),
                  *(_DWORD *)(*(_QWORD *)this + 120LL),
                  v27,
                  v24,
                  v17,
                  v17,
                  v21,
                  v22,
                  v23,
                  0);
  v26 = XlateObject;
  if ( !XlateObject )
  {
    v11 = -1;
LABEL_24:
    XlateObject = 0LL;
    goto LABEL_25;
  }
  v25 = XlateObject;
LABEL_25:
  if ( XlateObject )
  {
    memset(v30, 0, sizeof(v30));
    v19 = *(_QWORD *)this;
    v20 = (_QWORD *)((*(_QWORD *)(*(_QWORD *)this + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 496LL) != 0LL));
    if ( !v20 )
    {
      v30[2] = *(_QWORD *)(v19 + 24);
      v30[3] = *(_QWORD *)(v19 + 48);
      WORD2(v30[9]) = 1;
      v20 = v30;
    }
    LOBYTE(v10) = (*(unsigned int (__fastcall **)(_QWORD *, _DWORD *, _QWORD, bool, int, int *, unsigned int, _DWORD *))(*(_QWORD *)a2 + 3296LL))(
                    v20,
                    v25,
                    0LL,
                    a3 != 4119,
                    a4,
                    a5,
                    a6,
                    a7) != 0;
    v11 = 1;
    *a7 = v10;
  }
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v26);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v27);
  return v11;
}
