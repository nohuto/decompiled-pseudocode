/*
 * XREFs of ?UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x18014A6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x1800686D4 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x18013379C (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     WPP_SF_Ld @ 0x18014A94C (WPP_SF_Ld.c)
 */

__int64 __fastcall CRotationManagerSync::UnlockAutoRotation(CRotationManagerSync *this)
{
  unsigned int v2; // edi
  int v3; // eax
  int v4; // eax
  ORIENTATION_PREFERENCE v5; // ecx
  bool v6; // zf
  int v7; // eax
  unsigned int v8; // edx

  if ( CIAMGlobals::IsCalledOnIAMThread(this) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v3 = *((_DWORD *)this + 10);
    if ( v3 )
    {
      v2 = 1;
      v4 = v3 - 1;
      *((_DWORD *)this + 10) = v4;
      if ( !v4 )
      {
        v5 = *((_DWORD *)this + 8);
        if ( *((_DWORD *)this + 5) != v5 )
        {
          *((_DWORD *)this + 5) = v5;
          v6 = *((_BYTE *)this + 25) == 0;
          *((_BYTE *)this + 24) = 0;
          if ( v6 )
          {
            SetDisplayAutoRotationPreferences(v5);
            *((_BYTE *)this + 24) = 1;
          }
        }
        v7 = *((_DWORD *)this + 4);
        v8 = *((_DWORD *)this + 7);
        if ( v7 != v8 )
        {
          CRotationManagerSync::_SetActiveProcessForRotation((CRotationManagerSync *)((char *)this - 80), v8);
          v7 = *((_DWORD *)this + 7);
          *((_DWORD *)this + 4) = v7;
        }
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            11LL,
            &WPP_31719bc1b6a93d8e0985d66f04e9a71e_Traceguids,
            *((unsigned int *)this + 8),
            v7);
        v2 = 0;
      }
    }
    else
    {
      v2 = -2147023728;
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  else
  {
    return (unsigned int)-2147024891;
  }
  return v2;
}
