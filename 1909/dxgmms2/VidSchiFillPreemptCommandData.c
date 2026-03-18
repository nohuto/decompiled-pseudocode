/*
 * XREFs of VidSchiFillPreemptCommandData @ 0x1C001416C
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0005FB0 (VidSchiSendToExecutionQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiFillPreemptCommandData(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 96LL);
  v3 = *(_QWORD *)(v2 + 24);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 104);
  v4 = *(unsigned __int16 *)(v2 + 4);
  v5 = *(_QWORD *)(v3 + 616);
  if ( (unsigned int)v4 < *(_DWORD *)(v3 + 688) )
    v5 += 8 * v4;
  *(_DWORD *)(a2 + 4) = *(unsigned __int16 *)(*(_QWORD *)v5 + 8LL);
  v6 = *(unsigned __int16 *)(v2 + 4);
  v7 = *(__int64 **)(v3 + 616);
  if ( (unsigned int)v6 < *(_DWORD *)(v3 + 688) )
    v7 += v6;
  result = *v7;
  *(_DWORD *)(a2 + 8) = *(unsigned __int16 *)(*v7 + 6);
  return result;
}
