/*
 * XREFs of ?CalcAllPathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C013AC60
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 */

__int64 __fastcall CalcAllPathDisplayConfigBufferSizeCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // rcx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGADAPTER *v10; // [rsp+28h] [rbp-20h]
  char v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v10 = a1;
  v11 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
  if ( *((_QWORD *)a1 + 315) && *((_DWORD *)a1 + 44) == 1 )
  {
    v4 = *((_QWORD *)a1 + 315);
    v5 = *(_QWORD *)(v4 + 88);
    v6 = *(_DWORD *)(v4 + 80);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v12, v5);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 80) + 72LL));
    v7 = *(_QWORD *)(v5 + 80);
    a2[1] += v6 * *(_DWORD *)(v7 + 40);
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v12 + 40));
  }
  if ( v11 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
  return 0LL;
}
