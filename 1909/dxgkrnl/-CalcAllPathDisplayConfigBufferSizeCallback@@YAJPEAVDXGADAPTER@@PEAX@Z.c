/*
 * XREFs of ?CalcAllPathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C014F3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall CalcAllPathDisplayConfigBufferSizeCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  _BYTE v11[8]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGADAPTER *v12; // [rsp+28h] [rbp-20h]
  char v13; // [rsp+30h] [rbp-18h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v12 = a1;
  v13 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
  if ( *((_QWORD *)a1 + 319) && *((_DWORD *)a1 + 44) == 1 )
  {
    v4 = *((_QWORD *)a1 + 319);
    v5 = *(_QWORD *)(v4 + 88);
    v6 = *(_DWORD *)(v4 + 80);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v14, v5);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 80) + 72LL));
    v7 = *(_QWORD *)(v5 + 80);
    a2[1] += v6 * *(_DWORD *)(v7 + 40);
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 64), v8, v9);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v14 + 40));
  }
  if ( v13 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
  return 0LL;
}
