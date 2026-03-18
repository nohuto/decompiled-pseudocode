/*
 * XREFs of ?CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0134550
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 */

__int64 __fastcall CalcActivePathDisplayConfigBufferSizeCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGADAPTER *v9; // [rsp+28h] [rbp-20h]
  char v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v9 = a1;
  v10 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v8);
  if ( *((_QWORD *)a1 + 315) && *((_DWORD *)a1 + 44) == 1 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)a1 + 315) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v12, v4);
    v5 = *(_QWORD *)(v4 + 88);
    v11 = 0LL;
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 32));
      v6 = *(_QWORD *)(v4 + 88);
    }
    else
    {
      v6 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v11, v6);
    if ( v11 )
      a2[1] += *(_DWORD *)(v11 + 136);
    auto_rc<DMMVIDPN const>::reset(&v11, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v12 + 40));
  }
  if ( v10 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v8);
  return 0LL;
}
