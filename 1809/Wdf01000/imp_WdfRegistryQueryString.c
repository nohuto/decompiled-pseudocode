/*
 * XREFs of imp_WdfRegistryQueryString @ 0x1C0060DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0017EE4 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C00315F4 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qdd @ 0x1C003E848 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qZd @ 0x1C005FAF0 (WPP_IFR_SF_qZd.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C0061C40 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0063DE0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

__int64 __fastcall imp_WdfRegistryQueryString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        WDFSTRING__ *String)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  unsigned __int8 v9; // dl
  signed int v10; // edi
  unsigned int v11; // r8d
  unsigned __int16 v12; // r9
  unsigned int v13; // edi
  FX_POOL_TRACKER *v14; // rsi
  unsigned __int8 v15; // dl
  const _GUID *Value; // [rsp+20h] [rbp-50h]
  FxRegKey *pKey; // [rsp+50h] [rbp-20h] BYREF
  FxString *pString; // [rsp+58h] [rbp-18h] BYREF
  _UNICODE_STRING tmp; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int dataLength; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int type; // [rsp+C0h] [rbp+50h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey);
  m_Globals = pKey->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  if ( !String )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, ValueName);
    if ( (int)result >= 0 )
    {
      FxObjectHandleGetPtr(m_Globals, (unsigned __int64)String, 0x1007u, (void **)&pString);
      v10 = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, 0, 0LL, &dataLength, &type);
      if ( v10 >= 0 )
      {
        if ( type - 1 > 1 )
          v10 = -1073741788;
        if ( v10 >= 0 )
          goto LABEL_14;
      }
      if ( v10 == -2147483643 )
      {
LABEL_14:
        v13 = dataLength;
        if ( !dataLength )
        {
          WPP_IFR_SF_qZd(m_Globals, v9, v11, 0x1Bu, Value, Key, ValueName);
          return 3221225609LL;
        }
        v14 = (FX_POOL_TRACKER *)FxPoolAllocator(
                                   m_Globals,
                                   &m_Globals->FxPoolFrameworks,
                                   1u,
                                   dataLength,
                                   m_Globals->Tag,
                                   retaddr);
        if ( v14 )
        {
          v10 = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, v13, v14, &dataLength, &type);
          if ( v10 < 0 )
            goto LABEL_29;
          if ( type - 1 > 1 )
            v10 = -1073741788;
          if ( v10 < 0 )
          {
LABEL_29:
            WPP_IFR_SF_qdd(m_Globals, 2u, 2u, 0x1Eu, WPP_FxRegistryAPI_cpp_Traceguids, Key, dataLength, v10);
          }
          else if ( dataLength > 0xFFFF )
          {
            v10 = -1073741306;
            WPP_IFR_SF_qddd(
              m_Globals,
              v15,
              2u,
              0x1Du,
              WPP_FxRegistryAPI_cpp_Traceguids,
              Key,
              dataLength,
              0xFFFF,
              -1073741306);
          }
          else
          {
            if ( dataLength )
            {
              tmp.Buffer = (wchar_t *)v14;
              tmp.Length = dataLength;
              tmp.MaximumLength = dataLength;
              if ( !*((_WORD *)v14 + ((unsigned __int64)(unsigned __int16)dataLength >> 1) - 1) )
                tmp.Length = dataLength - 2;
            }
            else
            {
              *(_DWORD *)&tmp.Length = 0;
              tmp.Buffer = (wchar_t *)&unk_1C009BDD0;
            }
            v10 = FxDuplicateUnicodeString(pString->m_Globals, &tmp, &pString->m_UnicodeString);
          }
          FxPoolFree(v14);
          return (unsigned int)v10;
        }
        v10 = -1073741670;
        v12 = 28;
      }
      else
      {
        v12 = 26;
      }
      WPP_IFR_SF_qL(m_Globals, 2u, 2u, v12, WPP_FxRegistryAPI_cpp_Traceguids, Key, v10);
      return (unsigned int)v10;
    }
  }
  return result;
}
