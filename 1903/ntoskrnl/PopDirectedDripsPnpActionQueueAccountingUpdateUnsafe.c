/*
 * XREFs of PopDirectedDripsPnpActionQueueAccountingUpdateUnsafe @ 0x1402F169C
 * Callers:
 *     PopDirectedDripsPnpActionQueueAccountingSend @ 0x1402F13E0 (PopDirectedDripsPnpActionQueueAccountingSend.c)
 *     PopDirectedDripsPnpActionQueueAccountingUpdate @ 0x1402F15FC (PopDirectedDripsPnpActionQueueAccountingUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDirectedDripsPnpActionQueueAccountingUpdateUnsafe(__int64 a1, char a2)
{
  __int64 v3; // r9
  __int64 v4; // r8
  unsigned int v5; // eax
  _DWORD *v6; // rdx
  __int64 result; // rax
  _DWORD *v8; // rdx

  v3 = MEMORY[0xFFFFF78000000008];
  v4 = 26LL;
  v5 = *(_DWORD *)(a1 + 588);
  if ( a2 )
  {
    if ( v5 != 26 )
      *(_QWORD *)(a1 + 720) = MEMORY[0xFFFFF78000000008];
    if ( *(_DWORD *)(a1 + 584) )
      *(_QWORD *)(a1 + 712) = v3;
    v8 = (_DWORD *)(a1 + 936);
    do
    {
      result = (unsigned int)*(v8 - 86);
      *v8++ += result;
      --v4;
    }
    while ( v4 );
  }
  else
  {
    if ( v5 != 26 )
    {
      *(_QWORD *)(a1 + 8LL * v5 + 728) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 720);
      *(_QWORD *)(a1 + 720) = 0LL;
    }
    if ( *(_DWORD *)(a1 + 584) )
    {
      *(_QWORD *)(a1 + 704) += v3 - *(_QWORD *)(a1 + 712);
      *(_QWORD *)(a1 + 712) = 0LL;
    }
    v6 = (_DWORD *)(a1 + 936);
    do
    {
      result = (unsigned int)*(v6 - 86);
      *v6++ -= result;
      --v4;
    }
    while ( v4 );
  }
  *(_BYTE *)(a1 + 696) = a2;
  return result;
}
