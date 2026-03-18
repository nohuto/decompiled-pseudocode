/*
 * XREFs of ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x18006E4B4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA68 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseAnimation::ProcessRemoveBinding(
        CBaseAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEANIMATION_REMOVEBINDING *a3)
{
  unsigned int v4; // ecx
  __int64 v5; // r8
  struct CResource *ResourceWithoutType; // r14
  unsigned int v7; // esi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned int v11; // ecx
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
      if ( !(*(unsigned __int8 (__fastcall **)(CBaseAnimation *))(*(_QWORD *)this + 160LL))(this) )
        (**((void (__fastcall ***)(char *))this + 7))((char *)this + 56);
      if ( *((_DWORD *)this + 22) )
      {
        v11 = *((_DWORD *)this + 22);
        if ( v7 >= v11 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024809, 0x19Cu);
        }
        else
        {
          v12 = *((_QWORD *)this + 8);
          if ( v7 < v11 - 1 )
          {
            do
            {
              v10 = v7 + 1;
              v14 = 2LL * v7;
              v7 = v10;
              *(_OWORD *)(v12 + 8 * v14) = *(_OWORD *)(v12 + 16 * v10);
              v11 = *((_DWORD *)this + 22);
            }
            while ( (unsigned int)v10 < v11 - 1 );
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
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2003303421, 0x46u);
  }
  return v8;
}
