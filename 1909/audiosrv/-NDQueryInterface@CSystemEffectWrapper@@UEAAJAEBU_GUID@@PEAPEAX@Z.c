/*
 * XREFs of ?NDQueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18013A020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18013A420 (-QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::NDQueryInterface(void **this, const struct _GUID *a2, void **a3)
{
  int v3; // esi
  __int64 v4; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  void **v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v4 )
  {
    v7 = (unsigned __int64)(this + 1);
    *a3 = (void *)(v7 & -(__int64)(this != 0LL));
LABEL_75:
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 8LL))(v7);
    return (unsigned int)v3;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data4;
  if ( !v8 )
  {
    if ( !this[18] )
    {
      v3 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)this, a2, this + 18);
      if ( v3 >= 0 )
        *a3 = this + 1;
      return (unsigned int)v3;
    }
    v7 = (unsigned __int64)(this + 1);
    *a3 = (void *)v7;
    goto LABEL_75;
  }
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data4;
  if ( !v9 )
  {
    if ( !this[20] )
    {
      v3 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)this, a2, this + 20);
      if ( v3 >= 0 )
      {
        v10 = (char *)(this + 2);
LABEL_72:
        *a3 = v10;
        return (unsigned int)v3;
      }
      return (unsigned int)v3;
    }
    v11 = (char *)(this + 2);
    goto LABEL_74;
  }
  v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data1 )
    v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data4;
  if ( !v12 )
  {
    if ( !this[19] )
    {
      v3 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)this, a2, this + 19);
      if ( v3 >= 0 )
      {
        v10 = (char *)(this + 3);
        goto LABEL_72;
      }
      return (unsigned int)v3;
    }
    v11 = (char *)(this + 3);
LABEL_74:
    *a3 = v11;
    v7 = (unsigned __int64)(this + 1);
    goto LABEL_75;
  }
  v13 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b.Data1 )
    v13 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b.Data4;
  if ( !v13 )
  {
    v14 = this + 21;
LABEL_30:
    if ( !*v14 )
    {
      v3 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)this, a2, v14);
      if ( v3 >= 0 )
      {
        v10 = (char *)(this + 4);
        goto LABEL_72;
      }
      return (unsigned int)v3;
    }
    v11 = (char *)(this + 4);
    goto LABEL_74;
  }
  v15 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data1 )
    v15 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data4;
  if ( !v15 )
  {
    v14 = this + 22;
    goto LABEL_30;
  }
  v16 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f851809c_c177_49a0_b1b2_b66f017943ab.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f851809c_c177_49a0_b1b2_b66f017943ab.Data1 )
    v16 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f851809c_c177_49a0_b1b2_b66f017943ab.Data4;
  if ( !v16 )
  {
    if ( !this[25] )
    {
      v3 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)this, a2, this + 25);
      if ( v3 >= 0 )
      {
        v10 = (char *)(this + 6);
        goto LABEL_72;
      }
      return (unsigned int)v3;
    }
    v11 = (char *)(this + 6);
    goto LABEL_74;
  }
  v17 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1 )
    v17 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data4;
  if ( !v17 )
  {
    if ( !this[23] )
    {
      v3 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)this, a2, this + 23);
      if ( v3 >= 0 )
      {
        v10 = (char *)(this + 5);
        goto LABEL_72;
      }
      return (unsigned int)v3;
    }
    v11 = (char *)(this + 5);
    goto LABEL_74;
  }
  v18 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_25385759_3236_4101_a943_25693dfb5d2d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_25385759_3236_4101_a943_25693dfb5d2d.Data1 )
    v18 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_25385759_3236_4101_a943_25693dfb5d2d.Data4;
  if ( !v18 )
  {
    if ( !this[26] )
    {
      v3 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)this, a2, this + 26);
      if ( v3 >= 0 )
      {
        v10 = (char *)(this + 7);
        goto LABEL_72;
      }
      return (unsigned int)v3;
    }
    v11 = (char *)(this + 7);
    goto LABEL_74;
  }
  v19 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_8ab91395_f920_4132_873f_7a40607f7901.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_8ab91395_f920_4132_873f_7a40607f7901.Data1 )
    v19 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_8ab91395_f920_4132_873f_7a40607f7901.Data4;
  if ( !v19 )
  {
    if ( !this[27] )
    {
      v3 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)this, a2, this + 27);
      if ( v3 >= 0 )
      {
        v10 = (char *)(this + 8);
        goto LABEL_72;
      }
      return (unsigned int)v3;
    }
    v11 = (char *)(this + 8);
    goto LABEL_74;
  }
  v20 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7.Data1 )
    v20 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7.Data4;
  if ( !v20 )
  {
    if ( !this[24] )
    {
      v3 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)this, a2, this + 24);
      if ( v3 >= 0 )
      {
        v10 = (char *)(this + 9);
        goto LABEL_72;
      }
      return (unsigned int)v3;
    }
    v11 = (char *)(this + 9);
    goto LABEL_74;
  }
  return CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)this, a2, a3);
}
