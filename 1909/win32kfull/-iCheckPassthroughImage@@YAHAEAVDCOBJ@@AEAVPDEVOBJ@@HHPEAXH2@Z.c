/*
 * XREFs of ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C01091FC
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0123D78 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C00A0330 (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00B5580 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00BF39C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bSupportsJPEG@XDCOBJ@@QEAAHXZ @ 0x1C0109528 (-bSupportsJPEG@XDCOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall iCheckPassthroughImage(
        struct DCOBJ *a1,
        struct PDEVOBJ *a2,
        int a3,
        int a4,
        _DWORD *a5,
        unsigned int a6,
        _DWORD *a7)
{
  int v7; // r9d
  int v10; // edi
  unsigned int v11; // r14d
  unsigned int v12; // r10d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbx
  _DWORD *XlateObject; // rax
  __int64 v18; // rbx
  struct _SURFOBJ *v19; // r10
  _DWORD *v20; // rbx
  __int64 v22; // [rsp+30h] [rbp-378h]
  __int64 v23; // [rsp+38h] [rbp-370h]
  __int64 v24; // [rsp+40h] [rbp-368h]
  __int64 v27; // [rsp+58h] [rbp-350h]
  _DWORD *v28; // [rsp+60h] [rbp-348h]
  _DWORD *v29; // [rsp+68h] [rbp-340h] BYREF
  __int64 v30; // [rsp+70h] [rbp-338h] BYREF
  int v31; // [rsp+78h] [rbp-330h]
  int v32; // [rsp+80h] [rbp-328h]
  _DWORD *v33; // [rsp+88h] [rbp-320h]
  _DWORD *v34; // [rsp+90h] [rbp-318h]
  _BYTE v35[704]; // [rsp+A0h] [rbp-308h] BYREF

  v7 = a3;
  v34 = a5;
  v33 = a7;
  v10 = 0;
  v11 = 0;
  v12 = 8;
  if ( a3 == 8 )
  {
    v32 = *a5;
    if ( v32 == 4119 )
    {
      if ( (unsigned int)XDCOBJ::bSupportsJPEG(a1) )
        return *(_QWORD *)(*(_QWORD *)a2 + 3296LL) != 0LL;
    }
    else
    {
      v13 = *(_QWORD *)a1;
      if ( (*(_DWORD *)(v13 + 76) & 8) != 0 && *(_DWORD *)(v13 + 32) != 1 )
        return *(_QWORD *)(*(_QWORD *)a2 + 3296LL) != 0LL;
    }
    return v11;
  }
  if ( !*(_QWORD *)(*(_QWORD *)a2 + 3296LL) )
    return v11;
  if ( a6 < 4 || !a7 )
    return (unsigned int)-1;
  v14 = *(_QWORD *)a1;
  v15 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
  if ( v15 )
    v27 = *(_QWORD *)(v15 + 128);
  else
    v27 = 0LL;
  v16 = *(_QWORD *)(v14 + 88);
  v31 = 0;
  v30 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( (v7 != 4119 || !(unsigned int)XDCOBJ::bSupportsJPEG(a1))
    && (v7 != 4120 || ((unsigned __int8)*(_DWORD *)(v14 + 76) & (unsigned __int8)v12) == 0 || *(_DWORD *)(v14 + 32) == 1)
    || !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v30, v12, 0, 0LL, 0, 0, 0, 0x200u, 1) )
  {
    goto LABEL_23;
  }
  LODWORD(v24) = 0xFFFFFF;
  LODWORD(v23) = 0;
  LODWORD(v22) = 0;
  XlateObject = CreateXlateObject(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 248LL),
                  *(_DWORD *)(*(_QWORD *)a1 + 120LL),
                  v30,
                  v27,
                  v16,
                  v16,
                  v22,
                  v23,
                  v24,
                  0);
  v29 = XlateObject;
  if ( !XlateObject )
  {
    v11 = -1;
LABEL_23:
    XlateObject = 0LL;
    goto LABEL_24;
  }
  v28 = XlateObject;
LABEL_24:
  if ( XlateObject )
  {
    v18 = *(_QWORD *)a1;
    v19 = SURFACE::pSurfobj(*(SURFACE **)(*(_QWORD *)a1 + 496LL));
    if ( !v19 )
    {
      memset(v35, 0, 0x2B8uLL);
      v19 = SURFACE::pSurfobj((SURFACE *)v35);
      v19->dhpdev = *(DHPDEV *)(v18 + 24);
      v19->hdev = *(HDEV *)(*(_QWORD *)a1 + 48LL);
      v19->iType = 1;
    }
    v20 = v33;
    LOBYTE(v10) = (*(unsigned int (__fastcall **)(struct _SURFOBJ *, _DWORD *, _QWORD, bool, int, _DWORD *, unsigned int, _DWORD *))(*(_QWORD *)a2 + 3296LL))(
                    v19,
                    v28,
                    0LL,
                    a3 != 4119,
                    a4,
                    v34,
                    a6,
                    v33) != 0;
    v11 = 1;
    *v20 = v10;
  }
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v29);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v30);
  return v11;
}
