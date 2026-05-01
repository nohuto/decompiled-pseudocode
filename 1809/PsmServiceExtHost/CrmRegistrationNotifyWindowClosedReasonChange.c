/*
 * XREFs of CrmRegistrationNotifyWindowClosedReasonChange @ 0x180034128
 * Callers:
 *     CrmActivityStart @ 0x180033278 (CrmActivityStart.c)
 *     CrmActivityListenerCallback @ 0x180033AE0 (CrmActivityListenerCallback.c)
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x180034E4C (CrmSrvActivityWindowClosedReasonSubscribe.c)
 * Callees:
 *     CrmLogRegistrationNotifyWindowClosedReasonChange @ 0x180034224 (CrmLogRegistrationNotifyWindowClosedReasonChange.c)
 */

__int64 __fastcall CrmRegistrationNotifyWindowClosedReasonChange(__int64 a1, __int64 a2)
{
  int *v2; // rdi
  unsigned int v5; // eax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( *(_DWORD *)(a2 + 48) == 17 )
  {
    v7 = 255;
    v11 = 255;
    if ( !*(_DWORD *)(a2 + 80) )
    {
LABEL_18:
      v5 = RtlPublishWnfStateData(*(_QWORD *)(a2 + 112), 0LL, &v11, 4LL, 0LL);
      v2 = &v11;
      return CrmLogRegistrationNotifyWindowClosedReasonChange(a1, a2, v2, v5);
    }
    v8 = *(_QWORD *)(a2 + 88);
    v9 = *(unsigned int *)(a2 + 80);
    v10 = (_DWORD *)(v8 + 32);
    while ( 1 )
    {
      if ( v10[4] )
      {
        switch ( *v10 )
        {
          case 7:
            v7 &= ~1u;
            break;
          case 9:
            v7 &= ~2u;
            break;
          case 0x10:
            v7 &= ~4u;
            break;
          case 0x13:
            v7 &= ~8u;
            break;
          case 0x14:
            v7 &= ~0x10u;
            break;
          case 0x15:
            v7 &= ~0x20u;
            break;
          case 0x16:
            v7 &= ~0x40u;
            break;
          case 0x1A:
            v7 &= ~0x80u;
            break;
          default:
            goto LABEL_17;
        }
        v11 = v7;
      }
LABEL_17:
      v10 += 14;
      if ( !--v9 )
        goto LABEL_18;
    }
  }
  v5 = RtlPublishWnfStateData(*(_QWORD *)(a2 + 112), 0LL, 0LL, 0LL, 0LL);
  return CrmLogRegistrationNotifyWindowClosedReasonChange(a1, a2, v2, v5);
}
