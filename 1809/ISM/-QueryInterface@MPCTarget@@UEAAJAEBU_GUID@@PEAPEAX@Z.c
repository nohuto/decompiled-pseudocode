/*
 * XREFs of ?QueryInterface@MPCTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000B940
 * Callers:
 *     ?QueryInterface@MPCFocusTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000AF90 (-QueryInterface@MPCFocusTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000BF20 (-QueryInterface@MPCTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCTarget::QueryInterface(MPCTarget *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  unsigned int v6; // ebx
  char *v7; // rsi

  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3
    || *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5.Data4 )
  {
    (*(void (__fastcall **)(MPCTarget *))(*(_QWORD *)this + 8LL))(this);
    result = 0LL;
    *a3 = this;
  }
  else
  {
    v6 = 0;
    v7 = (char *)this + 8;
    if ( a3 )
    {
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
        && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))((char *)this + 8);
        *a3 = v7;
      }
      else
      {
        return (unsigned int)-2147467262;
      }
    }
    else
    {
      return (unsigned int)-2147024809;
    }
    return v6;
  }
  return result;
}
