/*
 * XREFs of VidSchiResetContextQuantumAtISR @ 0x1C0013460
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0piixqq @ 0x1C002C198 (McTemplateK0piixqq.c)
 */

__int64 __fastcall VidSchiResetContextQuantumAtISR(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int8 v2; // bl
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx

  v1 = *(_QWORD *)(a1 + 96);
  v2 = 0;
  if ( *(_BYTE *)(a1 + 632)
    || (*(_DWORD *)(*(_QWORD *)(v1 + 24) + 1936LL) & 4) == 0
    || gulPriorityToYieldPriorityBand[*(unsigned int *)(a1 + 404)] )
  {
    v3 = *(_QWORD *)(a1 + 464);
    *(_BYTE *)(a1 + 632) = 0;
LABEL_3:
    *(_QWORD *)(a1 + 440) = v3;
LABEL_4:
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 3, 2);
    v2 = 1;
    goto LABEL_5;
  }
  if ( *(_QWORD *)(v1 + 1992) )
    v6 = *(_QWORD *)(v1 + 2000);
  else
    v6 = *(_QWORD *)(a1 + 464);
  if ( *(_BYTE *)(v1 + 2008) && *(__int64 *)(a1 + 440) <= 0 )
  {
    v7 = *(_QWORD *)(v1 + 1984);
    if ( *(_QWORD *)(a1 + 480) == v7 )
      v6 = 0LL;
    else
      *(_QWORD *)(a1 + 480) = v7;
  }
  *(_QWORD *)(a1 + 440) += v6;
  v8 = *(_QWORD *)(a1 + 440);
  if ( v8 > 0 )
  {
    v3 = *(_QWORD *)(a1 + 464);
    if ( v8 <= v3 )
      goto LABEL_4;
    goto LABEL_3;
  }
LABEL_5:
  if ( bTracingEnabled )
  {
    v4 = *(_QWORD *)(a1 + 56);
    if ( !v4 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      LODWORD(v4) = a1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      McTemplateK0piixqq(
        a1,
        *(_QWORD *)(a1 + 448),
        v1,
        v4,
        *(_QWORD *)(a1 + 448),
        *(_QWORD *)(a1 + 440),
        *(_QWORD *)(v1 + 2000),
        *(_DWORD *)(a1 + 436),
        1);
  }
  return v2;
}
