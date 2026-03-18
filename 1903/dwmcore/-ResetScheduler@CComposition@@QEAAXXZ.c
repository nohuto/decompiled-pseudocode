/*
 * XREFs of ?ResetScheduler@CComposition@@QEAAXXZ @ 0x1800D90F8
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x1800E97B0 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateCompa.c)
 * Callees:
 *     <none>
 */

void __fastcall CComposition::ResetScheduler(CComposition *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 47);
  if ( v1 )
    *(_BYTE *)(v1 + 20) = 1;
}
