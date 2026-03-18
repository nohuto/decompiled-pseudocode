/*
 * XREFs of xxxGetComboBoxInfo @ 0x1C014C85C
 * Callers:
 *     NtUserGetComboBoxInfo @ 0x1C014C670 (NtUserGetComboBoxInfo.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX @ 0x1C014CC68 (unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall xxxGetComboBoxInfo(__int64 *BugCheckParameter2, __int64 a2)
{
  __int64 *v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // r13d
  __int64 *v9; // rdi
  __int64 v10; // rdi
  __int16 v11; // ax
  __int64 v12; // rcx
  PRKPROCESS *v14; // r14
  ULONG64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // edx
  int v30; // ecx
  _OWORD v31[8]; // [rsp+70h] [rbp-88h] BYREF
  int v32; // [rsp+100h] [rbp+8h]

  v4 = 0LL;
  LODWORD(v31[0]) = 64;
  memset((char *)v31 + 4, 0, 0x3CuLL);
  v8 = 0;
  if ( !BugCheckParameter2 || (v10 = BugCheckParameter2[5], v11 = *(_WORD *)(v10 + 42), (v11 & 0x1000) != 0) )
  {
    v9 = 0LL;
  }
  else
  {
    v12 = 674LL;
    if ( (v11 & 0x2FFF) == 0x2A2
      || (v5 = **(unsigned __int16 **)(BugCheckParameter2[14] + 8), v12 = gpsi, (_WORD)v5 == *(_WORD *)(gpsi + 878LL)) )
    {
      if ( *(_DWORD *)(v10 + 252) )
        v9 = (__int64 *)BugCheckParameter2[33];
      else
        v9 = *(__int64 **)(v10 + 296);
    }
    else
    {
      v9 = 0LL;
    }
    if ( v9 )
      goto LABEL_13;
  }
  v4 = (__int64 *)unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX(BugCheckParameter2);
  if ( !v4 )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x164u, 0LL, a2, 0, 0, 0LL, 1, 1);
  }
LABEL_13:
  if ( *(_DWORD *)a2 != 64 )
  {
    UserSetLastError(87LL, v5, v6, v7);
    return 0LL;
  }
  v14 = *(PRKPROCESS **)(BugCheckParameter2[2] + 424);
  if ( v14 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(v12) )
  {
    v32 = 0;
  }
  else
  {
    v32 = 1;
    KeAttachProcess(*v14);
  }
  if ( v9 )
  {
    v16 = *v9;
LABEL_27:
    if ( v16 )
    {
      if ( PsGetCurrentProcessWow64Process(v15) )
        v19 = 0LL;
      else
        v19 = 3LL;
      if ( (v19 & v16) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = *(_QWORD *)v16;
      if ( PsGetCurrentProcessWow64Process(MmUserProbeAddress) )
        v21 = 0LL;
      else
        v21 = 3LL;
      if ( (v21 & v20) != 0 )
        ExRaiseDatatypeMisalignment();
      v22 = 0LL;
      if ( v20 )
        v22 = *(_QWORD *)v20;
      *((_QWORD *)&v31[2] + 1) = v22;
      v23 = *(_QWORD *)(v16 + 64);
      if ( PsGetCurrentProcessWow64Process(MmUserProbeAddress) )
        v24 = 0LL;
      else
        v24 = 3LL;
      if ( (v24 & v23) != 0 )
        ExRaiseDatatypeMisalignment();
      v25 = 0LL;
      if ( v23 )
        v25 = *(_QWORD *)v23;
      if ( v25 == *BugCheckParameter2 )
        v25 = 0LL;
      *(_QWORD *)&v31[3] = v25;
      v26 = *(_QWORD *)(v16 + 72);
      if ( PsGetCurrentProcessWow64Process(v25) )
        v27 = 0LL;
      else
        v27 = 3LL;
      if ( (v27 & v26) != 0 )
        ExRaiseDatatypeMisalignment();
      v28 = 0LL;
      if ( v26 )
        v28 = *(_QWORD *)v26;
      *((_QWORD *)&v31[3] + 1) = v28;
      *(_OWORD *)((char *)v31 + 4) = *(_OWORD *)(v16 + 16);
      *(_OWORD *)((char *)&v31[1] + 4) = *(_OWORD *)(v16 + 32);
      DWORD1(v31[2]) = 0;
      v29 = *(_DWORD *)(v16 + 80);
      v30 = 0;
      if ( (v29 & 3) == 1 )
      {
        v30 = 0x8000;
        DWORD1(v31[2]) = 0x8000;
      }
      if ( (v29 & 0x20) != 0 )
        DWORD1(v31[2]) = v30 | 8;
      *(_OWORD *)a2 = v31[0];
      *(_OWORD *)(a2 + 16) = v31[1];
      *(_OWORD *)(a2 + 32) = v31[2];
      *(_OWORD *)(a2 + 48) = v31[3];
      v8 = 1;
    }
    goto LABEL_61;
  }
  v17 = *v4;
  if ( *v4 )
  {
    if ( PsGetCurrentProcessWow64Process(v15) )
      v18 = 0LL;
    else
      v18 = 3LL;
    if ( (v18 & v17) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = MmUserProbeAddress;
    v16 = *(_QWORD *)(v17 + 144);
    goto LABEL_27;
  }
LABEL_61:
  if ( v32 )
    KeDetachProcess();
  return v8;
}
