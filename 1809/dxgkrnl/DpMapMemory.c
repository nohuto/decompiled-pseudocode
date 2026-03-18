/*
 * XREFs of DpMapMemory @ 0x1C0159CF0
 * Callers:
 *     <none>
 * Callees:
 *     DpiVerifyResources @ 0x1C0159F70 (DpiVerifyResources.c)
 */

__int64 __fastcall DpMapMemory(
        __int64 a1,
        union _LARGE_INTEGER a2,
        __int64 a3,
        char a4,
        PLARGE_INTEGER a5,
        int a6,
        PVOID *BaseAddress)
{
  PVOID *v7; // r13
  __int64 v8; // r15
  char v9; // r12
  SIZE_T v10; // rbx
  union _LARGE_INTEGER *v11; // rdi
  int v12; // esi
  char v13; // r9
  __int64 v14; // rsi
  unsigned int v15; // r12d
  SIZE_T v16; // rdx
  union _LARGE_INTEGER v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdi
  union _LARGE_INTEGER *PoolWithTag; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  union _LARGE_INTEGER **v23; // rax
  LONGLONG v24; // rdx
  char v25; // bl
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v30; // rax
  NTSTATUS v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *QuadPart; // rdx
  void **v40; // rax
  SIZE_T v41; // r8
  PVOID v42; // rcx
  int v43; // [rsp+5Ch] [rbp-5Dh]
  void *SectionHandle; // [rsp+60h] [rbp-59h] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp-51h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-49h] BYREF
  SIZE_T CommitSize; // [rsp+78h] [rbp-41h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-29h] BYREF
  union _LARGE_INTEGER v50; // [rsp+110h] [rbp+57h] BYREF
  SIZE_T NumberOfBytes; // [rsp+118h] [rbp+5Fh]
  char v52; // [rsp+120h] [rbp+67h]

  v52 = a4;
  LODWORD(NumberOfBytes) = a3;
  v50 = a2;
  v7 = BaseAddress;
  v8 = 0LL;
  v9 = 0;
  v10 = (unsigned int)a3;
  v11 = 0LL;
  v12 = a1;
  if ( !a1 || !BaseAddress || !(_DWORD)a3 )
  {
    LODWORD(v14) = -1073741811;
    v38 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v38 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v38);
    goto LABEL_27;
  }
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 || *(_DWORD *)(v8 + 16) != 1953656900 || (unsigned int)(*(_DWORD *)(v8 + 20) - 2) > 1 )
  {
    LODWORD(v14) = -1073741811;
    v36 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    goto LABEL_43;
  }
  if ( KeGetCurrentIrql() )
  {
    v30 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdWarning)(
            a1,
            (union _LARGE_INTEGER)a2.QuadPart,
            a3);
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v30);
  }
  v13 = v52;
  *v7 = 0LL;
  LODWORD(v14) = DpiVerifyResources(v12, (unsigned int)&v50, v10, v13, (char)a5, (__int64)&a6, (__int64)v7);
  if ( (int)v14 >= 0 )
  {
    if ( !*v7 )
    {
      v43 = a6;
      if ( v52 == 1 )
      {
        v17 = v50;
        v9 = 0;
        *v7 = (PVOID)v50.QuadPart;
        goto LABEL_18;
      }
      v15 = 0;
      if ( (_BYTE)a5 != 1 )
      {
        v15 = 4;
        if ( !a6 || byte_1C008E750 )
        {
          v15 = 516;
        }
        else if ( a6 != 1 )
        {
          if ( a6 == 2 )
          {
            v15 = 1028;
          }
          else
          {
            v35 = WdLogNewEntry5_WdError((unsigned int)(a6 - 1));
            *(_QWORD *)(v35 + 24) = v43;
            *(_QWORD *)(v35 + 32) = v8;
            WdLogEvent5_WdError(v35);
          }
        }
        v16 = v10;
        v17 = v50;
        v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmMapIoSpaceEx)(
                (union _LARGE_INTEGER)v50.QuadPart,
                v16,
                v15);
LABEL_16:
        *v7 = (PVOID)v18;
        v19 = (unsigned int)NumberOfBytes;
        if ( v18 )
        {
          v9 = 1;
          *(_DWORD *)(v8 + 2504) += ((unsigned int)NumberOfBytes + (unsigned __int64)(v18 & 0xFFF) + 4095) >> 12;
LABEL_18:
          PoolWithTag = (union _LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x74727044u);
          v11 = PoolWithTag;
          if ( !PoolWithTag )
          {
            LODWORD(v14) = -1073741801;
            v37 = WdLogNewEntry5_WdLowResource(v22);
            *(_QWORD *)(v37 + 24) = -1073741801LL;
            WdLogEvent5_WdLowResource(v37);
LABEL_52:
            if ( v9 == 1 )
            {
              v41 = (unsigned int)NumberOfBytes;
              *(_DWORD *)(v8 + 2504) -= ((*(_DWORD *)v7 & 0xFFF) + (unsigned __int64)(unsigned int)NumberOfBytes + 4095) >> 12;
              v42 = *v7;
              if ( (_BYTE)a5 == 1 )
                ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v42);
              else
                MmUnmapIoSpace(v42, v41);
            }
            return (unsigned int)v14;
          }
          PoolWithTag[2].LowPart = 1953656900;
          PoolWithTag[2].HighPart = 8;
          PoolWithTag[3].LowPart = 1;
          PoolWithTag[4] = v17;
          PoolWithTag[5].LowPart = NumberOfBytes;
          BYTE4(PoolWithTag[5].QuadPart) = v52;
          BYTE5(PoolWithTag[5].QuadPart) = (_BYTE)a5;
          PoolWithTag[6].QuadPart = PsGetCurrentProcess(v22, v21);
          v11[7].LowPart = v43;
          v11[8].QuadPart = (LONGLONG)*v7;
          LOBYTE(v11[9].LowPart) = v9;
          KeWaitForSingleObject((PVOID)(v8 + 2448), Executive, 0, 0, 0LL);
          v23 = (union _LARGE_INTEGER **)(v8 + 2432);
          v24 = *(_QWORD *)(v8 + 2432);
          if ( *(_QWORD *)(v24 + 8) != v8 + 2432 )
            goto LABEL_55;
          v11->QuadPart = v24;
          v11[1].QuadPart = (LONGLONG)v23;
          *(_QWORD *)(v24 + 8) = v11;
          *v23 = v11;
          KeReleaseMutex((PRKMUTEX)(v8 + 2448), 0);
          v25 = 1;
          v28 = WdLogNewEntry5_WdEvent(v27, v26);
          *(_QWORD *)(v28 + 24) = v11;
          WdLogEvent5_WdEvent(v28);
LABEL_21:
          if ( (int)v14 >= 0 )
            return (unsigned int)v14;
          if ( v25 != 1 )
            goto LABEL_50;
          KeWaitForSingleObject((PVOID)(v8 + 2448), Executive, 0, 0, 0LL);
          QuadPart = (_QWORD *)v11->QuadPart;
          if ( *(union _LARGE_INTEGER **)(v11->QuadPart + 8) == v11 )
          {
            v40 = (void **)v11[1].QuadPart;
            if ( *v40 == v11 )
            {
              *v40 = QuadPart;
              QuadPart[1] = v40;
              KeReleaseMutex((PRKMUTEX)(v8 + 2448), 0);
LABEL_50:
              if ( v11 )
                ExFreePoolWithTag(v11, 0x74727044u);
              goto LABEL_52;
            }
          }
LABEL_55:
          __fastfail(3u);
        }
        LODWORD(v14) = -1073741811;
        v36 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v36 + 24) = v19;
        *(_QWORD *)(v36 + 32) = v15;
LABEL_43:
        WdLogEvent5_WdError(v36);
        return (unsigned int)v14;
      }
      CommitSize = v10;
      ViewSize = v10;
      RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v31 = ZwOpenSection(&SectionHandle, 0xF001Fu, &ObjectAttributes);
      v14 = v31;
      if ( v31 >= 0 )
      {
        v17 = v50;
        SectionOffset = v50;
        if ( byte_1C008E750 == 1 || !v43 )
        {
          v15 = 512;
        }
        else if ( v43 == 2 )
        {
          v15 = 1024;
        }
        v14 = ZwMapViewOfSection(
                SectionHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                v7,
                0LL,
                CommitSize,
                &SectionOffset,
                &ViewSize,
                ViewUnmap,
                0,
                v15 | 4);
        ZwClose(SectionHandle);
        if ( (int)v14 >= 0 )
        {
          if ( v17.LowPart < SectionOffset.LowPart )
          {
            LODWORD(v14) = -1073741823;
            v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32);
            v34[3] = 275LL;
            v34[4] = 21LL;
            v34[5] = -1073741823LL;
            WdLogEvent5_WdCriticalError(v34);
            return (unsigned int)v14;
          }
          LODWORD(NumberOfBytes) = SectionOffset.LowPart + ViewSize - v17.LowPart;
          v18 = (__int64)*v7 + v17.QuadPart - SectionOffset.QuadPart;
          goto LABEL_16;
        }
      }
      v33 = WdLogNewEntry5_WdError(v32);
      *(_QWORD *)(v33 + 24) = v14;
      WdLogEvent5_WdError(v33);
      v9 = 0;
    }
LABEL_27:
    v25 = 0;
    goto LABEL_21;
  }
  return (unsigned int)v14;
}
