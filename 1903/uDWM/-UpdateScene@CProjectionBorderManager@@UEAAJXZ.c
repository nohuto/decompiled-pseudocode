/*
 * XREFs of ?UpdateScene@CProjectionBorderManager@@UEAAJXZ @ 0x180035C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800315C4 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::UpdateScene(struct _RTL_GENERIC_TABLE *this)
{
  _QWORD *v2; // rax
  unsigned int v3; // ebx
  __int64 v5; // rcx
  CSecondaryWindowRepresentation *v6; // rcx
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  v2 = RtlEnumerateGenericTableWithoutSplaying(this + 6, &RestartKey);
  if ( v2 )
  {
    while ( 1 )
    {
      v5 = v2[3];
      if ( v5 )
      {
        v6 = *(CSecondaryWindowRepresentation **)(v5 + 24);
        if ( *((_QWORD *)v6 + 6) )
        {
          v7 = CSecondaryWindowRepresentation::Validate(v6);
          v3 = v7;
          if ( v7 < 0 )
            break;
        }
      }
      v2 = RtlEnumerateGenericTableWithoutSplaying(this + 6, &RestartKey);
      if ( !v2 )
        goto LABEL_2;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x497,
      (unsigned int)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)v7,
      v8);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28E,
      (unsigned int)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)v3,
      v9);
  }
  else
  {
LABEL_2:
    v3 = 0;
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v3;
}
