/*
 * XREFs of NVMeHwMSIInterrupt @ 0x1C0005FB0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeCompletionDpcRoutine @ 0x1C00018F0 (NVMeCompletionDpcRoutine.c)
 *     RequestPendingCompletion @ 0x1C00060D0 (RequestPendingCompletion.c)
 *     NVMeMaskInterrupt @ 0x1C0016400 (NVMeMaskInterrupt.c)
 */

__int64 __fastcall NVMeHwMSIInterrupt(__int64 a1, unsigned __int16 a2)
{
  unsigned __int8 v4; // si
  bool v5; // bp
  __int64 v6; // r8
  __int64 v8; // r10
  __int64 v9; // rcx
  unsigned int i; // r14d
  __int64 v11; // r10
  __int64 v12; // r10
  signed __int32 v13[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+20h] [rbp-38h]
  int *v15; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+60h] [rbp+8h] BYREF
  int v17; // [rsp+68h] [rbp+10h] BYREF
  int v18; // [rsp+70h] [rbp+18h] BYREF

  if ( *(_WORD *)(a1 + 232) == 1 )
    a2 = -1;
  v4 = RequestPendingCompletion(a1, a2);
  if ( v4 )
  {
    v5 = *(_BYTE *)(a1 + 16) || (*(_DWORD *)(a1 + 104) & 1) != 0;
    if ( a2 == 0xFFFF || *(_WORD *)(a1 + 232) <= 1u )
    {
      if ( (*(_WORD *)(*(_QWORD *)(a1 + 408) + 16LL * *(unsigned __int16 *)(a1 + 578) + 14) & 1) != *(_WORD *)(a1 + 580) )
      {
        NVMeMaskInterrupt(a1, *(unsigned __int16 *)(a1 + 576));
        if ( v5 )
        {
          NVMeCompletionDpcRoutine(v8 + 24, a1, v8, 0LL);
        }
        else
        {
          v16 = 0;
          v15 = &v16;
          v14 = 0LL;
          StorPortNotification(4098LL, a1, v8 + 24, v8);
        }
      }
      v9 = *(_QWORD *)(a1 + 760);
      for ( i = 0; v9; ++i )
      {
        if ( i >= *(unsigned __int16 *)(a1 + 266) )
          break;
        v11 = v9 + 344LL * i;
        if ( (*(_WORD *)(*(_QWORD *)v11 + 16LL * *(unsigned __int16 *)(v11 + 170) + 14) & 1) != *(_WORD *)(v11 + 172) )
        {
          NVMeMaskInterrupt(a1, *(unsigned __int16 *)(v11 + 168));
          if ( v5 )
          {
            NVMeCompletionDpcRoutine(v12 + 24, a1, v12, 0LL);
          }
          else
          {
            v18 = 0;
            v15 = &v18;
            v14 = 0LL;
            StorPortNotification(4098LL, a1, v12 + 24, v12);
          }
        }
        v9 = *(_QWORD *)(a1 + 760);
      }
    }
    else
    {
      if ( a2 )
        v6 = 344LL * a2 + *(_QWORD *)(a1 + 760) - 344LL;
      else
        v6 = a1 + 408;
      if ( !*(_BYTE *)(a1 + 18) && (unsigned int)(*(_DWORD *)(a1 + 12) - 1) <= 1 )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 136) + 12LL) = 1 << *(_BYTE *)(v6 + 168);
        _InterlockedOr(v13, 0);
        *(_BYTE *)(a1 + 18) = 1;
      }
      if ( v5 )
      {
        NVMeCompletionDpcRoutine(v6 + 24, a1, v6, 0LL);
      }
      else
      {
        v15 = &v17;
        v14 = 0LL;
        v17 = 0;
        StorPortNotification(4098LL, a1, v6 + 24, v6);
      }
    }
    return v4;
  }
  else
  {
    ++*(_QWORD *)(a1 + 3760);
    return 0LL;
  }
}
