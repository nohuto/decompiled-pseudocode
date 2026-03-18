/*
 * XREFs of Return @ 0x1C000A220
 * Callers:
 *     <none>
 * Callees:
 *     DupObjData @ 0x1C000A090 (DupObjData.c)
 *     NewObjData @ 0x1C000A678 (NewObjData.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 */

__int64 __fastcall Return(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned int v4; // esi
  struct _SLIST_ENTRY *v5; // r14
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r9
  int v12; // ecx
  _DWORD *v13; // rcx
  _DWORD *v14; // r15
  int v15; // edi
  _DWORD *v16; // r12
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  _QWORD *v20; // rcx
  _QWORD *v21; // rcx

  v2 = *(_QWORD *)(a2 + 80);
  v3 = *(_QWORD *)(a2 + 88);
  v4 = 0;
  v5 = *(struct _SLIST_ENTRY **)(a1 + 320);
  if ( v3 == v2 )
    goto LABEL_3;
  *(_OWORD *)v3 = *(_OWORD *)v2;
  *(_OWORD *)(v3 + 16) = *(_OWORD *)(v2 + 16);
  *(_QWORD *)(v3 + 32) = *(_QWORD *)(v2 + 32);
  if ( !*(_QWORD *)(v2 + 32) )
    goto LABEL_3;
  v7 = (void *)NewObjData(v5, v2);
  *(_QWORD *)(v3 + 32) = v7;
  if ( !v7 )
  {
    LogError(3221225626LL, v8, v9, v10);
    AcpiDiagTraceAmlError(0LL, 3221225626LL);
    PrintDebugMessage(43, 0, 0, 0, 0LL);
    return 3221225626LL;
  }
  memmove(v7, *(const void **)(v2 + 32), *(unsigned int *)(v2 + 24));
  v12 = *(unsigned __int16 *)(v3 + 2);
  if ( v12 == 4 )
  {
    v13 = *(_DWORD **)(v3 + 32);
    v14 = *(_DWORD **)(v2 + 32);
    v15 = 0;
    *v13 = *v14;
    if ( (int)*v14 > 0 )
    {
      v16 = v13 + 2;
      do
      {
        v4 = DupObjData(v5, (__int64)&v16[10 * v15], (__int64)&v14[10 * v15 + 2], v11);
        if ( v4 )
          break;
        ++v15;
      }
      while ( v15 < *v14 );
    }
  }
  else
  {
    v17 = v12 - 5;
    if ( !v17 )
      goto LABEL_26;
    v18 = v17 - 125;
    if ( !v18 )
    {
      v21 = *(_QWORD **)(v3 + 32);
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*v21 + 112LL));
        v21 = *(_QWORD **)(v3 + 32);
      }
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v21[1] + 112LL));
      goto LABEL_11;
    }
    v19 = v18 - 1;
    if ( v19 )
    {
      if ( v19 == 1 )
      {
        v20 = *(_QWORD **)(v3 + 32);
        if ( (gdwfAMLI & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v20[1] + 112LL));
          v20 = *(_QWORD **)(v3 + 32);
        }
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(*v20 + 112LL));
      }
    }
    else
    {
LABEL_26:
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(v3 + 32) + 112LL));
    }
  }
LABEL_11:
  *(_WORD *)v3 &= ~1u;
  _InterlockedExchange((volatile __int32 *)(v3 + 8), 0);
LABEL_3:
  if ( v4 )
    return v4;
  else
    return 32770LL;
}
