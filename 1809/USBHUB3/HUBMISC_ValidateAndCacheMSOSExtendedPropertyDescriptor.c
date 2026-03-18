/*
 * XREFs of HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor @ 0x1C002BFE8
 * Callers:
 *     HUBDSM_ValidatingMSOSExtendedPropertyDescriptor @ 0x1C001F3D0 (HUBDSM_ValidatingMSOSExtendedPropertyDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C0006450 (McTemplateK0p.c)
 */

__int64 __fastcall HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor(__int64 a1)
{
  unsigned int *v1; // rdi
  _DWORD *v2; // rsi
  unsigned int v4; // r14d
  int v5; // ebp
  __int64 v6; // rcx
  unsigned __int16 v7; // ax
  unsigned int *v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // r11d
  struct _MCGEN_TRACE_CONTEXT *v13; // rcx

  v1 = *(unsigned int **)(a1 + 2112);
  v2 = (_DWORD *)(a1 + 1732);
  v4 = 4065;
  v5 = 0;
  if ( *(_DWORD *)(a1 + 256) != *(_DWORD *)(a1 + 1732) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
    v7 = 70;
    goto LABEL_25;
  }
  if ( RtlCompareMemory((const void *)(a1 + 1732), *(const void **)(a1 + 2112), 0xAuLL) != 10 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
    v7 = 71;
    goto LABEL_25;
  }
  if ( *v2 > 0x1000u )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
    v7 = 72;
LABEL_25:
    WPP_RECORDER_SF_(v6, 2u, 5u, v7, (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0p(
        v13,
        &USBHUB3_ETW_EVENT_INVALID_MSOS_EXTENDED_PROPERTY_DESCRIPTOR,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24));
    return v4;
  }
  v8 = (unsigned int *)((char *)v1 + 10);
  v9 = (unsigned __int64)v1 + *v1;
  while ( (unsigned __int64)v8 < v9 )
  {
    if ( (unsigned __int64)v8 + 14 > v9 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
      v7 = 73;
      goto LABEL_25;
    }
    v10 = *v8;
    if ( (int)v9 - (int)v8 < (unsigned int)v10 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
      v7 = 74;
      goto LABEL_25;
    }
    if ( (unsigned int)v10 < 0xE )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
      v7 = 75;
      goto LABEL_25;
    }
    if ( v8[1] - 1 > 6 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
      v7 = 76;
      goto LABEL_25;
    }
    v11 = *((unsigned __int16 *)v8 + 4);
    if ( (int)v11 + 14 > (unsigned int)v10 || !*((_WORD *)v8 + 4) || (v11 & 1) != 0 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
      v7 = 77;
      goto LABEL_25;
    }
    if ( !*((_WORD *)v8 + 5) || *((_WORD *)v8 + ((unsigned __int64)*((unsigned __int16 *)v8 + 4) >> 1) + 4) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
      v7 = 78;
      goto LABEL_25;
    }
    v12 = *(unsigned int *)((char *)v8 + v11 + 10);
    if ( (unsigned int)v11 > ~v12 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
      v7 = 79;
      goto LABEL_25;
    }
    if ( (unsigned int)(v12 + v11) > 0xFFFFFFF1 || v12 + (int)v11 + 14 > (unsigned int)v10 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
      v7 = 80;
      goto LABEL_25;
    }
    if ( ++v5 == *((unsigned __int16 *)v1 + 4) )
      break;
    v8 = (unsigned int *)((char *)v8 + v10);
  }
  if ( v5 != *((unsigned __int16 *)v1 + 4) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
    v7 = 81;
    goto LABEL_25;
  }
  return 4077;
}
