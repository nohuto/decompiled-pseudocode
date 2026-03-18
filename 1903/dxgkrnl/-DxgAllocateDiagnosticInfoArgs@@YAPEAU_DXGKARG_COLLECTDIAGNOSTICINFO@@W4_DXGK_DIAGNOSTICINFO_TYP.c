/*
 * XREFs of ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1C02001FC
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 *     DpiAddDevice @ 0x1C01617D0 (DpiAddDevice.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02386DC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

_QWORD *__fastcall DxgAllocateDiagnosticInfoArgs(int a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rbx
  PVOID v8; // rax
  __int64 v9; // rax

  v2 = operator new[](0xE8uLL, 0x4B677844u, PagedPool);
  v7 = v2;
  if ( !v2 )
    goto LABEL_6;
  memset(v2, 0, 0xE8uLL);
  v8 = operator new[](0x80000uLL, 0x4B677844u, PagedPool);
  v7[28] = v8;
  if ( v8 )
  {
    *((_DWORD *)v7 + 55) = 0;
    *((_DWORD *)v7 + 54) = 0x80000;
    *((_DWORD *)v7 + 2) = a1;
    memset(v8, 0, 0x80000uLL);
  }
  else
  {
    operator delete(v7);
    v7 = 0LL;
  }
  if ( !v7 )
  {
LABEL_6:
    v9 = WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
    *(_QWORD *)(v9 + 24) = 10297LL;
    WdLogEvent5_WdLowResource(v9);
  }
  return v7;
}
