/*
 * XREFs of RequestPendingCompletion @ 0x1C0004BA0
 * Callers:
 *     NVMeHwMSIInterrupt @ 0x1C0004A80 (NVMeHwMSIInterrupt.c)
 *     NVMeHwInterrupt @ 0x1C00084C0 (NVMeHwInterrupt.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0018FF8 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0003F10 (GetSrbExtension.c)
 *     IsInternalSrb @ 0x1C0007E68 (IsInternalSrb.c)
 */

_BOOL8 __fastcall RequestPendingCompletion(__int64 a1, unsigned __int16 a2)
{
  __int64 v3; // rdi
  _WORD *v4; // rdx
  __int16 v5; // cx
  bool v6; // si
  __int64 v8; // r8
  unsigned int v9; // ecx
  unsigned __int16 v10; // bp
  __int16 v11; // r14
  unsigned __int16 v12; // cx
  unsigned __int16 v13; // r8
  unsigned __int16 v14; // r12
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r11
  __int64 SrbExtension; // r15
  unsigned __int8 v19; // [rsp+68h] [rbp+10h]

  if ( a2 != 0xFFFF )
  {
    if ( a2 )
      v3 = 344LL * a2 + *(_QWORD *)(a1 + 768) - 344LL;
    else
      v3 = a1 + 416;
    v4 = (_WORD *)(*(_QWORD *)v3 + 16LL * *(unsigned __int16 *)(v3 + 170));
    v5 = v4[7] & 1;
    v6 = v5 != *(_WORD *)(v3 + 172);
    v19 = v6;
    if ( v5 == *(_WORD *)(v3 + 172) )
      return v6;
    goto LABEL_5;
  }
  v3 = a1 + 416;
  v4 = (_WORD *)(*(_QWORD *)(a1 + 416) + 16LL * *(unsigned __int16 *)(a1 + 586));
  if ( (v4[7] & 1) != *(_WORD *)(a1 + 588) )
  {
LABEL_13:
    v6 = 1;
    v19 = 1;
LABEL_5:
    if ( (*(_DWORD *)(a1 + 104) & 2) != 0 )
    {
      v10 = *(_WORD *)(v3 + 170);
      v11 = *(_WORD *)(v3 + 172);
      if ( (v4[7] & 1) != v11 )
      {
        do
        {
          v12 = v4[5];
          v13 = v4[6];
          if ( *(_WORD *)(v3 + 168) && (*(_DWORD *)(a1 + 20) & 1) == 0 )
            break;
          if ( v12 )
          {
            v14 = *(_WORD *)(a1 + 270);
            v15 = (__int64 *)(136LL * v12 + *(_QWORD *)(a1 + 760) - 104LL);
          }
          else
          {
            v14 = *(_WORD *)(a1 + 268);
            v15 = (__int64 *)(a1 + 312);
          }
          v16 = *v15;
          if ( !*(_QWORD *)(v16 + 16LL * v13) || (unsigned __int8)IsInternalSrb(a1, *(_QWORD *)(v16 + 16LL * v13)) )
            break;
          SrbExtension = GetSrbExtension(v17);
          if ( *(_QWORD *)(SrbExtension + 4160) )
          {
            StorPortExtendedFunction(47LL, a1, 0LL);
            *(_QWORD *)(SrbExtension + 4176) = 0LL;
          }
          if ( v10 >= v14 - 1 )
          {
            v10 = 0;
            v11 = v11 != 1;
          }
          else
          {
            ++v10;
          }
          v4 = (_WORD *)(*(_QWORD *)v3 + 16LL * v10);
        }
        while ( (v4[7] & 1) != v11 );
        return (bool)v19;
      }
    }
    return v6;
  }
  v8 = *(_QWORD *)(a1 + 768);
  v6 = 0;
  v9 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      v6 = 0;
      if ( v9 >= *(unsigned __int16 *)(a1 + 274) )
        break;
      v3 = v8 + 344LL * v9;
      v4 = (_WORD *)(*(_QWORD *)v3 + 16LL * *(unsigned __int16 *)(v3 + 170));
      if ( (v4[7] & 1) != *(_WORD *)(v3 + 172) )
        goto LABEL_13;
      ++v9;
    }
  }
  return v6;
}
