/*
 * XREFs of TpCallbackIndependent @ 0x18006CA90
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x1800A1450 (NtAlpcSetInformation.c)
 *     NtSetInformationWorkerFactory @ 0x1800A35F0 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __fastcall TpCallbackIndependent(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rdi
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v7; // rsi
  signed __int32 v8; // eax
  int v9; // edx
  signed __int32 v10; // r8d
  int v11; // eax
  int v12; // ecx
  void *v14; // rcx
  signed __int32 PortInformation; // [rsp+40h] [rbp+8h] BYREF
  int WorkerFactoryInformation; // [rsp+48h] [rbp+10h] BYREF
  signed __int64 v17; // [rsp+50h] [rbp+18h]

  v2 = 0;
  v3 = 0LL;
  if ( !a1 || *(_DWORD *)(a1 + 72) )
  {
    TppRaiseInvalidParameter(a1, a2, a1);
    v11 = -1073741811;
    goto LABEL_14;
  }
  v4 = *(_QWORD *)(a1 + 184);
  if ( v4 )
    v3 = *(_QWORD *)(v4 + 144);
  else
    v3 = *(_QWORD *)(a1 + 128);
  if ( !v3 )
  {
    v11 = -1073741811;
LABEL_20:
    v12 = v11;
    goto LABEL_21;
  }
  if ( TppPoolpSerializedPool == v3 )
  {
    v11 = -1073741637;
    goto LABEL_20;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 416));
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 420));
  _m_prefetchw((const void *)(v3 + 8));
  v5 = *(_QWORD *)(v3 + 8);
  v17 = v5;
  do
  {
    LODWORD(v17) = v5 ^ (unsigned __int16)(v5 ^ (v5 + 1));
    v6 = v5;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8), v17, v5);
    v17 = v5;
  }
  while ( v6 != v5 );
  *(_DWORD *)(a1 + 144) |= 0x10u;
  v7 = *(_QWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 72) = 2;
  if ( v7 && (*(_BYTE *)(v7 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 284);
      v9 = MEMORY[0x7FFE03C0] + *(_DWORD *)(*(_QWORD *)(v7 + 216) + 420LL);
      v10 = v9 + MEMORY[0x7FFE03C0];
      if ( v8 >= v9 && v8 <= v10 + MEMORY[0x7FFE03C0] )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 284), v10, v8) )
      {
        v14 = *(void **)(v7 + 272);
        PortInformation = v10;
        NtAlpcSetInformation(v14, AlpcAdjustCompletionListConcurrencyCountInformation, &PortInformation, 4u);
      }
    }
  }
  v11 = 0;
LABEL_14:
  v12 = v11;
  if ( v11 >= 0 )
  {
    WorkerFactoryInformation = 2;
    return NtSetInformationWorkerFactory(*(HANDLE *)(v3 + 56), WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
  }
LABEL_21:
  if ( v11 != -1073741637 )
    return v12;
  return v2;
}
