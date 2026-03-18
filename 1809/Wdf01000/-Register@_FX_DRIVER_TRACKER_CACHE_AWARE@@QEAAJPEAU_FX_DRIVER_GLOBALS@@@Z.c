/*
 * XREFs of ?Register@_FX_DRIVER_TRACKER_CACHE_AWARE@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0092480
 * Callers:
 *     FxRegisterBugCheckCallback @ 0x1C00929C0 (FxRegisterBugCheckCallback.c)
 * Callees:
 *     WdmlibProcgrpInitialize @ 0x1C00C5DD8 (WdmlibProcgrpInitialize.c)
 */

__int64 __fastcall _FX_DRIVER_TRACKER_CACHE_AWARE::Register(
        _FX_DRIVER_TRACKER_CACHE_AWARE *this,
        _FX_DRIVER_GLOBALS *__formal)
{
  unsigned int v2; // ebx
  __int64 (__fastcall *SystemRoutineAddress)(__int64); // rax
  unsigned int m_Number; // eax
  __int64 (*v6)(void); // rax
  char *v7; // rax
  __int64 (*v8)(void); // rax
  unsigned int v9; // ebp
  POOL_TYPE v10; // ecx
  unsigned __int64 PoolWithTag; // rax
  void *v12; // rcx
  unsigned int v13; // r9d
  __int64 v14; // rsi
  PVOID v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rcx
  _UNICODE_STRING funcName; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( this->m_PoolToFree )
    return v2;
  WdmlibProcgrpInitialize();
  RtlInitUnicodeString(&funcName, L"KeQueryMaximumProcessorCountEx");
  SystemRoutineAddress = (__int64 (__fastcall *)(__int64))MmGetSystemRoutineAddress(&funcName);
  if ( SystemRoutineAddress )
  {
    m_Number = SystemRoutineAddress(0xFFFFLL);
  }
  else
  {
    RtlInitUnicodeString(&funcName, L"KeQueryMaximumProcessorCount");
    v6 = (__int64 (*)(void))MmGetSystemRoutineAddress(&funcName);
    if ( v6 )
    {
      m_Number = v6();
    }
    else
    {
      if ( (HIDWORD(WPP_GLOBAL_WDF_Control.Dpc.SystemArgument1) != 5
         || !LODWORD(WPP_GLOBAL_WDF_Control.Dpc.SystemArgument2))
        && *(void **)((char *)&WPP_GLOBAL_WDF_Control.Dpc.SystemArgument1 + 4) != (void *)6 )
      {
        return (unsigned int)-1073741637;
      }
      v7 = *(char **)&KeNumberProcessors;
      m_Number = *v7;
    }
  }
  this->m_Number = m_Number;
  if ( m_Number > 0x100 )
    return (unsigned int)-1073741637;
  if ( m_Number <= 1 )
  {
    v9 = 8;
    goto LABEL_15;
  }
  RtlInitUnicodeString(&funcName, L"KeGetRecommendedSharedDataAlignment");
  v8 = (__int64 (*)(void))MmGetSystemRoutineAddress(&funcName);
  if ( !v8 )
    return (unsigned int)-1073741637;
  v9 = v8();
  m_Number = this->m_Number;
LABEL_15:
  v10 = ExDefaultNonPagedPoolType;
  this->m_EntrySize = v9;
  PoolWithTag = (unsigned __int64)ExAllocatePoolWithTag(v10, v9 * m_Number, 0x72447846u);
  v12 = (void *)PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v13 = this->m_Number;
  if ( v13 > 1 )
  {
    v14 = v9 - 1;
    if ( (v14 & PoolWithTag) != 0 )
    {
      ExFreePoolWithTag((PVOID)PoolWithTag, 0);
      v15 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v9 * (this->m_Number + 1), 0x72447846u);
      v12 = v15;
      if ( !v15 )
        return (unsigned int)-1073741670;
      v13 = this->m_Number;
      PoolWithTag = ~v14 & ((unsigned __int64)v15 + v14);
    }
  }
  this->m_PoolToFree = v12;
  v16 = 0;
  this->m_DriverUsage = (_FX_DRIVER_TRACKER_CACHE_AWARE::_FX_DRIVER_TRACKER_ENTRY *)PoolWithTag;
  if ( v13 )
  {
    do
    {
      v17 = v16 * this->m_EntrySize;
      ++v16;
      *(_FX_DRIVER_GLOBALS *volatile *)((char *)&this->m_DriverUsage->FxDriverGlobals + v17) = 0LL;
    }
    while ( v16 < this->m_Number );
  }
  return v2;
}
