/*
 * XREFs of ?v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z @ 0x1800B0200
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800188B4 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Find@?$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z @ 0x1800819D0 (-Find@-$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z.c)
 */

char __fastcall CVirtualDesktopThumbnail::v_ShouldIncludeInSnapshot(
        CVirtualDesktopThumbnail *this,
        struct CWindowData *a2)
{
  char v5; // bl
  struct CWindowData *v6; // rdi
  struct CWindowData *v7; // rax
  __int64 v8; // rcx
  struct IDwmWindow *v9; // rax
  __int64 v10; // r11
  struct CWindowData *v11; // [rsp+48h] [rbp+10h] BYREF
  struct CWindowData *v12; // [rsp+50h] [rbp+18h] BYREF

  if ( (*((_BYTE *)a2 + 606) & 0x20) != 0 )
    return 0;
  v5 = 0;
  v11 = a2;
  v6 = a2;
  while ( (*((_DWORD *)a2 + 26) & 0x40000) == 0 )
  {
    v7 = (struct CWindowData *)*((_QWORD *)v6 + 69);
    if ( v7 && (*((_DWORD *)v7 + 25) & 0x10000000) != 0 )
    {
      v6 = (struct CWindowData *)*((_QWORD *)v6 + 69);
      v11 = v7;
    }
    else
    {
      v8 = *((_QWORD *)v6 + 3);
      if ( !v8 )
        break;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 80LL))(v8) )
        break;
      v9 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 3) + 376LL))(*((_QWORD *)v6 + 3));
      v12 = 0LL;
      if ( (int)CWindowList::GetSyncedWindowData(
                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                  v9,
                  0,
                  &v12) < 0 )
        break;
      v6 = v12;
      v11 = v12;
    }
  }
  if ( (unsigned int)DynArray<HMONITOR__ *,0>::Find(*((_QWORD *)this + 35) + 136LL, &v11)
    || !(unsigned int)DynArray<HMONITOR__ *,0>::Find(v10 + 168, &v11) && *((char *)a2 + 607) >= 0 )
  {
    return 1;
  }
  return v5;
}
