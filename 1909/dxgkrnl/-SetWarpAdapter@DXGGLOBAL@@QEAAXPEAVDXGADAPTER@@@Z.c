/*
 * XREFs of ?SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0023270
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0168F90 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::SetWarpAdapter(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 77);
  if ( !v2 || v2 == *((_QWORD *)this + 75) )
    *((_QWORD *)this + 77) = a2;
  *((_QWORD *)this + 75) = a2;
}
