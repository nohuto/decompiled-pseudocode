/*
 * XREFs of TpCallbackIndependent @ 0x18006CA90
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x1800A1430 (NtAlpcSetInformation.c)
 *     NtSetInformationWorkerFactory @ 0x1800A35D0 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpCallbackIndependent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdi
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v9; // rsi
  signed __int32 v10; // eax
  int v11; // edx
  signed __int32 v12; // r8d
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v16; // rcx
  signed __int32 v17; // [rsp+40h] [rbp+8h] BYREF
  int v18; // [rsp+48h] [rbp+10h] BYREF
  signed __int64 v19; // [rsp+50h] [rbp+18h]

  v4 = 0;
  v5 = 0LL;
  if ( !a1 || *(_DWORD *)(a1 + 72) )
  {
    TppRaiseInvalidParameter(a1, a2, a1, a4);
    v13 = -1073741811;
    goto LABEL_14;
  }
  v6 = *(_QWORD *)(a1 + 184);
  if ( v6 )
    v5 = *(_QWORD *)(v6 + 144);
  else
    v5 = *(_QWORD *)(a1 + 128);
  if ( !v5 )
  {
    v13 = -1073741811;
LABEL_20:
    v14 = v13;
    goto LABEL_21;
  }
  if ( TppPoolpSerializedPool == v5 )
  {
    v13 = -1073741637;
    goto LABEL_20;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 416));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 420));
  _m_prefetchw((const void *)(v5 + 8));
  v7 = *(_QWORD *)(v5 + 8);
  v19 = v7;
  do
  {
    LODWORD(v19) = v7 ^ (unsigned __int16)(v7 ^ (v7 + 1));
    v8 = v7;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 8), v19, v7);
    v19 = v7;
  }
  while ( v8 != v7 );
  *(_DWORD *)(a1 + 144) |= 0x10u;
  v9 = *(_QWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 72) = 2;
  if ( v9 && (*(_BYTE *)(v9 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v9 + 284);
      v11 = MEMORY[0x7FFE03C0] + *(_DWORD *)(*(_QWORD *)(v9 + 216) + 420LL);
      v12 = v11 + MEMORY[0x7FFE03C0];
      if ( v10 >= v11 && v10 <= v12 + MEMORY[0x7FFE03C0] )
        break;
      if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 284), v12, v10) )
      {
        v16 = *(_QWORD *)(v9 + 272);
        v17 = v12;
        NtAlpcSetInformation(v16, 8LL, &v17);
      }
    }
  }
  v13 = 0;
LABEL_14:
  v14 = v13;
  if ( v13 >= 0 )
  {
    v18 = 2;
    return NtSetInformationWorkerFactory(*(_QWORD *)(v5 + 56), 9LL, &v18);
  }
LABEL_21:
  if ( v13 != -1073741637 )
    return v14;
  return v4;
}
