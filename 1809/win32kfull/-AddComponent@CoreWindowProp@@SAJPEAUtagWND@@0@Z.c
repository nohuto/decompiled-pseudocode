/*
 * XREFs of ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0008CB8
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0008B78 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z @ 0x1C0008C58 (-FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z.c)
 *     ?UpdateProcessPriorityWhenComponentAdded@@YAXPEAUtagWND@@0@Z @ 0x1C0008D6C (-UpdateProcessPriorityWhenComponentAdded@@YAXPEAUtagWND@@0@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00723DC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0108ED4 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::AddComponent(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  struct tagWND *v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  char v11; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, &v10) )
  {
    v5 = v10;
    if ( *(_DWORD *)(v10 + 16) )
    {
      if ( !CoreWindowProp::FindComponent(a1, a2, 0LL) )
      {
        v6 = (_QWORD *)Win32AllocPool(16LL, 1920430933LL);
        if ( !v6 )
          return (unsigned int)-1073741801;
        *v6 = *(_QWORD *)(v5 + 32);
        v6[1] = a2;
        *(_QWORD *)(v5 + 32) = v6;
        ++*(_DWORD *)(v5 + 40);
      }
      UpdateProcessPriorityWhenComponentAdded(a1, a2);
      if ( *(_DWORD *)(*((_QWORD *)a2 + 5) + 236LL) != *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
        v8 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v8;
        v9 = a2;
        _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
        xxxSetWindowBand(a2, 0LL, *(unsigned int *)(*((_QWORD *)a1 + 5) + 236LL), 7LL, v8, v9);
        ThreadUnlock1();
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
      }
      return v4;
    }
  }
  UserSetLastError(5LL);
  return 3221225506LL;
}
