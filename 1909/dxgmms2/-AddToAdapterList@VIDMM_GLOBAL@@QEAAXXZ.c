/*
 * XREFs of ?AddToAdapterList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0090224
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C008FBDC (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 * Callees:
 *     ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C000219C (--0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::AddToAdapterList(VIDMM_GLOBAL *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  bool v4; // zf
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE(
    (DXGAUTOEXPUSHLOCKEXCLUSIVE *)v5,
    (struct _EX_PUSH_LOCK *const)&VIDMM_GLOBAL::_AdapterListLock);
  v2 = (_QWORD *)qword_1C004E780;
  v3 = (_QWORD *)((char *)this + 41464);
  if ( *(struct _LIST_ENTRY **)qword_1C004E780 != &VIDMM_GLOBAL::_AdapterListHead )
    __fastfail(3u);
  v4 = v7 == 1;
  *v3 = &VIDMM_GLOBAL::_AdapterListHead;
  v3[1] = v2;
  *v2 = v3;
  qword_1C004E780 = (__int64)v3;
  if ( v4 )
  {
    ExReleasePushLockSharedEx(v6, 0LL);
  }
  else if ( v7 == 2 )
  {
    ExReleasePushLockExclusiveEx(v6, 0LL);
  }
}
