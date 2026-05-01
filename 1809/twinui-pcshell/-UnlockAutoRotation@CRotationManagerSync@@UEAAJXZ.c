/*
 * XREFs of ?UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x1801054A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x180068C68 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x1800EFAAC (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     WPP_SF_Ld @ 0x180105798 (WPP_SF_Ld.c)
 */

__int64 __fastcall CRotationManagerSync::UnlockAutoRotation(CRotationManagerSync *this)
{
  unsigned int v2; // edi
  int v3; // ecx
  char v4; // al
  ORIENTATION_PREFERENCE v5; // ecx
  int v6; // eax
  unsigned int v7; // edx

  if ( CIAMGlobals::IsCalledOnIAMThread(this) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v3 = *((_DWORD *)this + 10);
    v2 = v3 != 0 ? 1 : -2147023728;
    if ( v3 )
    {
      v4 = v3 - 1;
      *((_DWORD *)this + 10) = v3 - 1;
      if ( v3 == 1 )
      {
        v5 = *((_DWORD *)this + 8);
        if ( *((_DWORD *)this + 5) != v5 )
        {
          *((_DWORD *)this + 5) = v5;
          *((_BYTE *)this + 24) = v4;
          if ( *((_BYTE *)this + 25) == v4 )
          {
            SetDisplayAutoRotationPreferences(v5);
            *((_BYTE *)this + 24) = 1;
          }
        }
        v6 = *((_DWORD *)this + 4);
        v7 = *((_DWORD *)this + 7);
        if ( v6 != v7 )
        {
          CRotationManagerSync::_SetActiveProcessForRotation((CRotationManagerSync *)((char *)this - 80), v7);
          v6 = *((_DWORD *)this + 7);
          *((_DWORD *)this + 4) = v6;
        }
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            11LL,
            &WPP_31719bc1b6a93d8e0985d66f04e9a71e_Traceguids,
            *((unsigned int *)this + 8),
            v6);
        v2 = 0;
      }
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  else
  {
    return (unsigned int)-2147024891;
  }
  return v2;
}
