/*
 * XREFs of imp_WdfRegistryAssignMemory @ 0x1C005FCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0017EE4 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryAssignMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName,
        ULONG ValueType,
        WDFMEMORY__ *Memory,
        _WDFMEMORY_OFFSET *MemoryOffsets)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  WDFMEMORY__ *_a2; // rbp
  __int64 result; // rax
  char *v11; // r12
  unsigned __int64 v12; // rax
  _WDFMEMORY_OFFSET *v13; // r15
  unsigned __int64 BufferLength; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdi
  int _a3; // edi
  unsigned __int16 v18; // r9
  unsigned __int64 v19; // rcx
  ULONG v20; // edx
  NTSTATUS v21; // eax
  FxRegKey *pKey; // [rsp+40h] [rbp-48h] BYREF
  ULONG_PTR retaddr; // [rsp+88h] [rbp+0h]
  IFxMemory *pMemory; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v25; // [rsp+A0h] [rbp+18h]
  ULONG Type; // [rsp+A8h] [rbp+20h]

  Type = ValueType;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey);
  m_Globals = pKey->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  _a2 = Memory;
  if ( !Memory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, ValueName);
    if ( (int)result >= 0 )
    {
      FxObjectHandleGetPtr(m_Globals, (unsigned __int64)_a2, 0x100Au, (void **)&pMemory);
      v11 = (char *)pMemory->GetBuffer(pMemory);
      v12 = pMemory->GetBufferSize(pMemory);
      v13 = MemoryOffsets;
      v25 = v12;
      if ( MemoryOffsets )
      {
        BufferLength = MemoryOffsets->BufferLength;
        v15 = BufferLength + MemoryOffsets->BufferOffset;
        if ( v15 >= BufferLength )
        {
          v16 = BufferLength + MemoryOffsets->BufferOffset;
          if ( v16 > pMemory->GetBufferSize(pMemory) )
          {
            _a3 = -1073741675;
LABEL_14:
            v18 = 33;
LABEL_15:
            WPP_IFR_SF_qid(m_Globals, 2u, 2u, v18, WPP_FxRegistryAPI_cpp_Traceguids, Key, (__int64)_a2, _a3);
            return (unsigned int)_a3;
          }
          _a3 = 0;
        }
        else
        {
          _a3 = v15 < BufferLength ? 0xC0000095 : 0;
        }
        if ( _a3 < 0 )
          goto LABEL_14;
        v19 = v13->BufferLength;
        if ( v19 )
        {
          v20 = -1;
          if ( v19 <= 0xFFFFFFFF )
            v20 = v13->BufferLength;
          _a3 = v19 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v19 > 0xFFFFFFFF )
          {
            v18 = 34;
            goto LABEL_15;
          }
        }
        else
        {
          v20 = v25;
        }
        v11 += v13->BufferOffset;
      }
      else
      {
        v20 = v25;
      }
      v21 = ZwSetValueKey(pKey->m_Key, ValueName, 0, Type, v11, v20);
      _a3 = v21;
      if ( v21 < 0 )
        WPP_IFR_SF_qL(m_Globals, 2u, 2u, 0x23u, WPP_FxRegistryAPI_cpp_Traceguids, Key, v21);
      return (unsigned int)_a3;
    }
  }
  return result;
}
