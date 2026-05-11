/*
 * XREFs of SetCopyProtectionOnTerminal @ 0x1C0025E74
 * Callers:
 *     WalkConnectionsToTerminal @ 0x1C0025FC0 (WalkConnectionsToTerminal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00117A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SetCopyProtectionOnTerminal(PIRP Irp, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // rbp
  PKSFILTER FilterFromIrp; // rdi
  PKSPIN PinFromIrp; // rax
  int v8; // r9d
  PKSPIN v9; // rsi
  _QWORD *Context; // r10
  ULONG Id; // r8d
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // edx
  unsigned int *v16; // rbx
  unsigned int v17; // eax
  int v18; // edi
  int v19; // eax

  v4 = a2;
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  PinFromIrp = KsGetPinFromIrp(Irp);
  v8 = 0;
  v9 = PinFromIrp;
  if ( !PinFromIrp )
    return 3221225485LL;
  Context = PinFromIrp->Context;
  if ( FilterFromIrp )
  {
    Id = PinFromIrp->Id;
    if ( Id < FilterFromIrp->Descriptor->PinDescriptorsCount )
    {
      if ( *((_BYTE *)&FilterFromIrp->Descriptor->PinDescriptors[1].AutomationTable + 176 * v4 + 5) )
      {
        if ( !a3[2] )
        {
          v13 = *((_QWORD *)FilterFromIrp->Context + 2);
          v14 = 0;
          v15 = *(_DWORD *)(v13 + 192);
          v16 = *(unsigned int **)(v13 + 200);
          if ( !v15 )
            return (unsigned int)-1073741275;
          do
          {
            if ( v16[21] == Id )
              break;
            v16 += 38;
            ++v14;
          }
          while ( v14 < v15 );
          if ( v14 >= v15 )
            return (unsigned int)-1073741275;
          v17 = v16[26];
          v18 = -1;
          if ( v17 == Id || v17 == -1 )
          {
            v8 = (*(__int64 (__fastcall **)(PKSPIN, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(Context[18] + 128LL) + 72LL))(
                   v9,
                   *a3,
                   v16[20],
                   0LL);
            v19 = *a3;
            if ( v8 < 0 )
            {
              if ( !v19 )
                return 0;
            }
            else
            {
              if ( v19 )
                v18 = v9->Id;
              v16[26] = v18;
            }
            return (unsigned int)v8;
          }
        }
        return (unsigned int)-1073741637;
      }
    }
  }
  return (unsigned int)v8;
}
