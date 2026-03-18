/*
 * XREFs of ?CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01439D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000968C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall CalcActivePathDisplayConfigBufferSizeCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  _BYTE v10[8]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGADAPTER *v11; // [rsp+28h] [rbp-20h]
  char v12; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v11 = a1;
  v12 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
  if ( *((_QWORD *)a1 + 319) && *((_DWORD *)a1 + 44) == 1 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)a1 + 319) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v14, v4);
    v6 = *(_QWORD *)(v4 + 88);
    v13 = 0LL;
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 32));
      v7 = *(_QWORD *)(v4 + 88);
    }
    else
    {
      v7 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v13, v7, v5);
    if ( v13 )
      a2[1] += *(_DWORD *)(v13 + 136);
    auto_rc<DMMVIDPN const>::reset(&v13, 0LL, v8);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v14 + 40));
  }
  if ( v12 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
  return 0LL;
}
