/*
 * XREFs of ?QueryInterface@CAPOWrapperClient@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180032EE0
 * Callers:
 *     ?QueryInterface@CAPOWrapperClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006D6B0 (-QueryInterface@CAPOWrapperClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006D6C0 (-QueryInterface@CAPOWrapperClient@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006D6D0 (-QueryInterface@CAPOWrapperClient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006D6E0 (-QueryInterface@CAPOWrapperClient@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006D6F0 (-QueryInterface@CAPOWrapperClient@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180033550 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperClient::QueryInterface(CAPOWrapperClient *this, const struct _GUID *a2, void **a3)
{
  void **v3; // r10
  __int64 v4; // rax
  const struct _GUID *v5; // r9
  unsigned int v6; // ebx
  __int64 Data1; // r8
  __int64 result; // rax
  char *v9; // rcx
  const struct _GUID *v10; // rcx
  char *v11; // r11
  void *v12; // r11
  int v13; // eax
  __int64 v14; // r11

  v3 = a3;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1;
  v5 = a2;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data4;
  if ( v4 || *((_DWORD *)this + 18) )
  {
    v6 = 0;
    *a3 = 0LL;
    Data1 = a2->Data1;
    if ( *(_QWORD *)&a2->Data1 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
    {
      *v3 = this;
      (*(void (__fastcall **)(CAPOWrapperClient *, const struct _GUID *, __int64, const struct _GUID *))(*(_QWORD *)this + 8LL))(
        this,
        a2,
        Data1,
        a2);
    }
    else
    {
      if ( (_DWORD)Data1 == 1221972245
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_48d5d115_0037_423d_a1d7_f4be39ae9dd6.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_48d5d115_0037_423d_a1d7_f4be39ae9dd6.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_48d5d115_0037_423d_a1d7_f4be39ae9dd6.Data4[4]
        || (this = (CAPOWrapperClient *)((char *)this + 8), (_DWORD)Data1 == -41997527)
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data4[4] )
      {
        *v3 = this;
      }
      else
      {
        v9 = (char *)this + 8;
        if ( (_DWORD)Data1 == -1157719598
          && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data2
          && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data4
          && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data4[4] )
        {
          *v3 = v9;
          v13 = 0;
        }
        else if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768) )
        {
          *v3 = v11;
          v13 = 0;
        }
        else
        {
          v12 = v11 + 8;
          if ( (_DWORD)Data1 == 1776416671
            && *(_DWORD *)&v5->Data2 == *(_DWORD *)&GUID_69e1f79f_6eae_4517_be9f_13aa90e30014.Data2
            && *(_DWORD *)v5->Data4 == *(_DWORD *)GUID_69e1f79f_6eae_4517_be9f_13aa90e30014.Data4
            && *(_DWORD *)&v5->Data4[4] == *(_DWORD *)&GUID_69e1f79f_6eae_4517_be9f_13aa90e30014.Data4[4] )
          {
            *v3 = v12;
            v13 = 0;
          }
          else if ( (unsigned int)InlineIsEqualGUID(v10, &GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7) )
          {
            *v3 = (void *)(v14 + 8);
            v13 = 0;
          }
          else
          {
            v13 = -2147467262;
          }
        }
        v6 = v13;
        if ( v13 < 0 )
          return v6;
      }
      (*(void (__fastcall **)(void *, _QWORD, __int64, const struct _GUID *))(*(_QWORD *)*v3 + 8LL))(
        *v3,
        *(_QWORD *)*v3,
        Data1,
        v5);
    }
    return v6;
  }
  result = 2147500034LL;
  *a3 = 0LL;
  return result;
}
