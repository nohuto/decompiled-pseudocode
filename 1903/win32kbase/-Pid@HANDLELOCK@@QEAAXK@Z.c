/*
 * XREFs of ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C0021DF8
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0019340 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C0019E60 (GreSetBrushOwner.c)
 *     HmgSetOwner @ 0x1C002A580 (HmgSetOwner.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0021EDC (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C0021FAC (-RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     McTemplateK0pqqq @ 0x1C0110924 (McTemplateK0pqqq.c)
 */

void __fastcall HANDLELOCK::Pid(HANDLELOCK *this, unsigned int a2)
{
  GdiHandleManager *v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // r10
  struct HOBJ__ **v7; // rdx
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  unsigned int v10; // ecx
  __int64 v11; // rax
  struct HOBJ__ *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int Arg1; // eax
  PMCGEN_TRACE_CONTEXT v18; // rcx
  const GUID *v19; // r8
  unsigned int v20; // [rsp+28h] [rbp-20h]

  *(_DWORD *)(*(_QWORD *)this + 8LL) = a2 ^ (a2 ^ *(_DWORD *)(*(_QWORD *)this + 8LL)) & 1;
  v4 = gpHandleManager;
  v5 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, **(_DWORD **)this & 0xFFFFFF);
  v6 = *((_QWORD *)v4 + 2);
  v7 = 0LL;
  v8 = v5;
  v9 = *(_DWORD *)(v6 + 2056);
  if ( v5 < v9 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
  {
    if ( v5 >= v9 )
      v10 = ((v5 - v9) >> 16) + 1;
    else
      v10 = 0;
    v11 = *(_QWORD *)(v6 + 8LL * v10 + 8);
    if ( v10 )
      v8 += ((1 - v10) << 16) - v9;
    if ( v8 < *(_DWORD *)(v11 + 20) )
      v7 = *(struct HOBJ__ ***)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v8 >> 8))
                              + 16LL * (unsigned __int8)v8
                              + 8);
  }
  v12 = *v7;
  RECHMGRCREATE(*v7, (struct _BASEOBJECT *)v7);
  if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 4) != 0 )
  {
    LOBYTE(v14) = *(_BYTE *)(*(_QWORD *)this + 14LL);
    Arg1 = GetEtwGdiHandleType(v14, v13, v15, v16);
    McTemplateK0pqqq(v18, &GdiUpdateHandleOwner, v19, v12, Arg1, v20, a2);
  }
}
