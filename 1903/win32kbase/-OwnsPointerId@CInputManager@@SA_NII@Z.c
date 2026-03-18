/*
 * XREFs of ?OwnsPointerId@CInputManager@@SA_NII@Z @ 0x1C01C7938
 * Callers:
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x1C01A5588 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputManager::OwnsPointerId(int a1, int a2)
{
  bool v3; // bl
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  _DWORD *v7; // rcx

  v3 = 0;
  if ( g_pInputManager )
  {
    ExAcquirePushLockSharedEx((char *)g_pInputManager + 120, 0LL);
    v5 = 0;
    v6 = *((_DWORD *)g_pInputManager + 28);
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = *(_DWORD **)(*((_QWORD *)g_pInputManager + 13) + 8LL * v5);
        if ( *v7 == a2 )
          break;
        if ( ++v5 >= v6 )
          goto LABEL_7;
      }
      v3 = a1 == v7[1];
    }
LABEL_7:
    ExReleasePushLockSharedEx((char *)g_pInputManager + 120, 0LL);
  }
  return v3;
}
