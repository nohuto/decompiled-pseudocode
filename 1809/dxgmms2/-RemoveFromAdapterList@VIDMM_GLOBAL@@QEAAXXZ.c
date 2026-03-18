/*
 * XREFs of ?RemoveFromAdapterList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00ABA38
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00A6B44 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C000168C (--0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RemoveFromAdapterList(VIDMM_GLOBAL *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  bool v5; // zf
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE(
    (DXGAUTOEXPUSHLOCKEXCLUSIVE *)v6,
    (struct _EX_PUSH_LOCK *const)&VIDMM_GLOBAL::_AdapterListLock);
  v2 = (_QWORD *)((char *)this + 41464);
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
    __fastfail(3u);
  v5 = v8 == 1;
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( v5 )
  {
    ExReleasePushLockSharedEx(v7, 0LL);
  }
  else if ( v8 == 2 )
  {
    ExReleasePushLockExclusiveEx(v7, 0LL);
  }
}
