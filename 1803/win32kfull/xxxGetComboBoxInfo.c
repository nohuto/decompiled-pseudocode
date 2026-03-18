/*
 * XREFs of xxxGetComboBoxInfo @ 0x1C012C368
 * Callers:
 *     NtUserGetComboBoxInfo @ 0x1C012C1A0 (NtUserGetComboBoxInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX @ 0x1C012C468 (unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall xxxGetComboBoxInfo(__int64 *BugCheckParameter2, __int64 a2)
{
  __int64 *v4; // r15
  __int64 v5; // rdx
  unsigned int v6; // r13d
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 *v9; // rdi
  PRKPROCESS *v11; // r14
  __int64 v12; // rdx
  ULONG64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r14
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // r13
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // edx
  int v39; // ecx
  _OWORD v40[8]; // [rsp+70h] [rbp-88h] BYREF
  int v41; // [rsp+100h] [rbp+8h]

  v4 = 0LL;
  LODWORD(v40[0]) = 64;
  memset((char *)v40 + 4, 0, 0x3CuLL);
  v6 = 0;
  if ( BugCheckParameter2 )
  {
    v7 = BugCheckParameter2[5];
    v8 = 674LL;
    if ( (*(_WORD *)(v7 + 42) & 0x3FFF) == 0x2A2
      || (v5 = **(unsigned __int16 **)(BugCheckParameter2[14] + 8), v8 = gpsi, (_WORD)v5 == *(_WORD *)(gpsi + 878LL)) )
    {
      if ( *(_DWORD *)(v7 + 252) )
        v9 = (__int64 *)BugCheckParameter2[34];
      else
        v9 = *(__int64 **)(v7 + 296);
    }
    else
    {
      v9 = 0LL;
    }
    if ( v9 )
      goto LABEL_12;
  }
  else
  {
    v9 = 0LL;
  }
  v4 = (__int64 *)unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX(BugCheckParameter2);
  if ( !v4 )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x164u, 0LL, a2, 0, 0, 0LL, 1, 1);
  }
LABEL_12:
  if ( *(_DWORD *)a2 != 64 )
  {
    UserSetLastError(87LL, v5);
    return 0LL;
  }
  v11 = *(PRKPROCESS **)(BugCheckParameter2[2] + 416);
  if ( v11 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(v8) )
  {
    v41 = 0;
  }
  else
  {
    v41 = 1;
    KeAttachProcess(*v11);
  }
  if ( v9 )
  {
    v16 = *v9;
LABEL_26:
    if ( v16 )
    {
      if ( PsGetCurrentProcessWow64Process(v13, v12, v14, v15) )
        v22 = 0LL;
      else
        v22 = 3LL;
      if ( (v22 & v16) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = *(_QWORD *)v16;
      if ( PsGetCurrentProcessWow64Process(MmUserProbeAddress, v19, v20, v21) )
        v27 = 0LL;
      else
        v27 = 3LL;
      if ( (v27 & v23) != 0 )
        ExRaiseDatatypeMisalignment();
      v28 = 0LL;
      if ( v23 )
        v28 = *(_QWORD *)v23;
      *((_QWORD *)&v40[2] + 1) = v28;
      v29 = *(_QWORD *)(v16 + 64);
      if ( PsGetCurrentProcessWow64Process(MmUserProbeAddress, v24, v25, v26) )
        v33 = 0LL;
      else
        v33 = 3LL;
      if ( (v33 & v29) != 0 )
        ExRaiseDatatypeMisalignment();
      v34 = 0LL;
      if ( v29 )
        v34 = *(_QWORD *)v29;
      if ( v34 == *BugCheckParameter2 )
        v34 = 0LL;
      *(_QWORD *)&v40[3] = v34;
      v35 = *(_QWORD *)(v16 + 72);
      if ( PsGetCurrentProcessWow64Process(v34, v30, v31, v32) )
        v36 = 0LL;
      else
        v36 = 3LL;
      if ( (v36 & v35) != 0 )
        ExRaiseDatatypeMisalignment();
      v37 = 0LL;
      if ( v35 )
        v37 = *(_QWORD *)v35;
      *((_QWORD *)&v40[3] + 1) = v37;
      *(_OWORD *)((char *)v40 + 4) = *(_OWORD *)(v16 + 16);
      *(_OWORD *)((char *)&v40[1] + 4) = *(_OWORD *)(v16 + 32);
      DWORD1(v40[2]) = 0;
      v38 = *(_DWORD *)(v16 + 80);
      v39 = 0;
      if ( (v38 & 3) == 1 )
      {
        v39 = 0x8000;
        DWORD1(v40[2]) = 0x8000;
      }
      if ( (v38 & 0x20) != 0 )
        DWORD1(v40[2]) = v39 | 8;
      *(_OWORD *)a2 = v40[0];
      *(_OWORD *)(a2 + 16) = v40[1];
      *(_OWORD *)(a2 + 32) = v40[2];
      *(_OWORD *)(a2 + 48) = v40[3];
      v6 = 1;
    }
    goto LABEL_60;
  }
  v17 = *v4;
  if ( *v4 )
  {
    if ( PsGetCurrentProcessWow64Process(v13, v12, v14, v15) )
      v18 = 0LL;
    else
      v18 = 3LL;
    if ( (v18 & v17) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = MmUserProbeAddress;
    v16 = *(_QWORD *)(v17 + 144);
    goto LABEL_26;
  }
LABEL_60:
  if ( v41 )
    KeDetachProcess();
  return v6;
}
