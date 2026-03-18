/*
 * XREFs of ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800CE390
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18007CBC0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseAnimation::ProcessRemoveBinding(
        CBaseAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEANIMATION_REMOVEBINDING *a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  struct CResource *ResourceWithoutType; // r14
  unsigned int v7; // esi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rax

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  if ( ResourceWithoutType )
  {
    v7 = 0;
    v8 = 0;
    if ( *((_DWORD *)this + 22) )
    {
      v9 = *((_QWORD *)this + 8);
      while ( *(struct CResource **)(v9 + 16LL * v7) != ResourceWithoutType
           || *(_DWORD *)(v9 + 16LL * v7 + 8) != *(_DWORD *)(v5 + 12) )
      {
        if ( ++v7 >= *((_DWORD *)this + 22) )
          return v8;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(CBaseAnimation *))(*(_QWORD *)this + 200LL))(this) )
        (**((void (__fastcall ***)(char *))this + 7))((char *)this + 56);
      if ( *((_DWORD *)this + 22) )
      {
        v11 = *((unsigned int *)this + 22);
        if ( v7 >= (unsigned int)v11 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, 0x80070057, 0x19Fu, 0LL);
        }
        else
        {
          v12 = *((_QWORD *)this + 8);
          if ( v7 < (int)v11 - 1 )
          {
            do
            {
              v10 = v7 + 1;
              v14 = 2LL * v7;
              v7 = v10;
              *(_OWORD *)(v12 + 8 * v14) = *(_OWORD *)(v12 + 16 * v10);
              LODWORD(v11) = *((_DWORD *)this + 22);
            }
            while ( (unsigned int)v10 < (int)v11 - 1 );
          }
          *((_DWORD *)this + 22) = v11 - 1;
        }
        (*(void (__fastcall **)(struct CResource *, __int64, __int64))(*(_QWORD *)ResourceWithoutType + 16LL))(
          ResourceWithoutType,
          v10,
          v12);
      }
    }
  }
  else
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, 0x88980403, 0x44u, 0LL);
  }
  return v8;
}
