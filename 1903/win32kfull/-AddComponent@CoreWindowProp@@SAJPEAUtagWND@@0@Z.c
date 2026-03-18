/*
 * XREFs of ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0006A60
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0006980 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?UpdateProcessPriorityWhenComponentAdded@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z @ 0x1C0006B24 (-UpdateProcessPriorityWhenComponentAdded@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z.c)
 *     ?FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z @ 0x1C0006B98 (-FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C008BADC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0110508 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::AddComponent(struct tagWND *this, struct tagWND *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  struct tagWND *v6; // r8
  _QWORD *v7; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(this, &v12) )
  {
    v5 = v12;
    if ( *(_DWORD *)(v12 + 16) )
    {
      if ( !CoreWindowProp::FindComponent(this, a2, 0LL) )
      {
        v7 = (_QWORD *)Win32AllocPool(16LL, 1920430933LL);
        if ( !v7 )
          return (unsigned int)-1073741801;
        *v7 = *(_QWORD *)(v5 + 32);
        v7[1] = a2;
        *(_QWORD *)(v5 + 32) = v7;
        ++*(_DWORD *)(v5 + 40);
      }
      PriorityBoostCUI::UpdateProcessPriorityWhenComponentAdded(this, a2, v6);
      if ( *(_DWORD *)(*((_QWORD *)a2 + 5) + 236LL) != *(_DWORD *)(*((_QWORD *)this + 5) + 236LL) )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
        v9 = 0LL;
        v10 = 0LL;
        v11 = 0LL;
        v9 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v9;
        v10 = a2;
        HMLockObject(a2);
        xxxSetWindowBand(a2, 0LL, *(unsigned int *)(*((_QWORD *)this + 5) + 236LL), 7LL);
        ThreadUnlock1();
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
      }
      return v4;
    }
  }
  UserSetLastError(5LL);
  return 3221225506LL;
}
