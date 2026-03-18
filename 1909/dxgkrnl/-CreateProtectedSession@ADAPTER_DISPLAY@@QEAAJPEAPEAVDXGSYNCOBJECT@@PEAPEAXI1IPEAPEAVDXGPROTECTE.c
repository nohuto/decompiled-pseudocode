/*
 * XREFs of ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C026160C
 * Callers:
 *     DxgkCreateProtectedSession @ 0x1C0261EE0 (DxgkCreateProtectedSession.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000C8EC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGPROTECTEDSESSION@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C004483C (--0DXGPROTECTEDSESSION@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z @ 0x1C00448C0 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z.c)
 *     ??_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z @ 0x1C0044A20 (--_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z.c)
 *     ?Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z @ 0x1C0261A18 (-Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateProtectedSession(
        DXGADAPTER **this,
        struct DXGSYNCOBJECT **a2,
        void **a3,
        unsigned int a4,
        void **a5,
        unsigned int a6,
        struct DXGPROTECTEDSESSION **a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  DXGPROTECTEDSESSION *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  DXGPROTECTEDSESSION *v20; // rbx
  __int64 v21; // rax
  __int64 v23; // rdx
  int v24; // ebp
  DXGPROTECTEDSESSION **v25; // rax
  DXGADAPTER *v26; // rcx
  bool v27; // zf
  _BYTE v28[40]; // [rsp+30h] [rbp-28h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v13 + 24) = 852LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a7 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v14 + 24) = 854LL;
    WdLogEvent5_WdAssertion(v14);
  }
  *a7 = 0LL;
  v15 = (DXGPROTECTEDSESSION *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x98uLL);
  if ( v15 )
    v20 = DXGPROTECTEDSESSION::DXGPROTECTEDSESSION(v15, (struct ADAPTER_DISPLAY *)this);
  else
    v20 = 0LL;
  if ( v20 )
  {
    v24 = DXGPROTECTEDSESSION::Initialize(v20, a2, a3, a4, a5, a6);
    if ( v24 >= 0 )
    {
      DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX(
        (DXGPROTECTEDSESSIONMUTEX *)v28,
        (struct ADAPTER_DISPLAY *)this);
      v25 = this + 73;
      v26 = this[73];
      if ( *((DXGADAPTER ***)v26 + 1) != this + 73 )
        __fastfail(3u);
      *(_QWORD *)v20 = v26;
      *((_QWORD *)v20 + 1) = v25;
      *((_QWORD *)v26 + 1) = v20;
      v27 = v28[8] == 0;
      *v25 = v20;
      if ( !v27 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
      _InterlockedIncrement64((volatile signed __int64 *)this[2] + 3);
      *a7 = v20;
      return 0LL;
    }
    else
    {
      DXGPROTECTEDSESSION::`scalar deleting destructor'((struct DXGSYNCOBJECT **)v20, v23);
      return (unsigned int)v24;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
    *(_QWORD *)(v21 + 24) = this;
    *(_QWORD *)(v21 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v21);
    return 3221225495LL;
  }
}
