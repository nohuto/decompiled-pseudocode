/*
 * XREFs of ?QueryInterface@InputInfoValidator@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801058D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0sqq @ 0x18000FEA0 (McTemplateU0sqq.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputInfoValidator::QueryInterface(InputInfoValidator *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      (*(void (__fastcall **)(InputInfoValidator *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
    }
    else
    {
      v3 = -2147467262;
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        McTemplateU0sqq((__int64)this, (__int64)a2, (__int64)"InputInfoValidator::QueryInterface", 196LL, 2);
    }
  }
  else
  {
    v3 = -2147024809;
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      McTemplateU0sqq((__int64)this, (__int64)a2, (__int64)"InputInfoValidator::QueryInterface", 185LL, 87);
  }
  return v3;
}
