/*
 * XREFs of DpMapMemory @ 0x1C017A3F0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 *     DpiVerifyResources @ 0x1C017A670 (DpiVerifyResources.c)
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
  PVOID *v7; // r12
  __int64 v8; // r15
  char v9; // r13
  SIZE_T v10; // rbx
  union _LARGE_INTEGER *v11; // rdi
  int v12; // esi
  char v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // r8
  unsigned int v17; // r13d
  SIZE_T v18; // rdx
  union _LARGE_INTEGER v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdi
  union _LARGE_INTEGER *PoolWithTag; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  union _LARGE_INTEGER **v29; // rax
  LONGLONG v30; // rdx
  char v31; // bl
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v35; // rax
  NTSTATUS v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *QuadPart; // rdx
  void **v45; // rax
  SIZE_T v46; // r8
  PVOID v47; // rcx
  int v48; // [rsp+5Ch] [rbp-5Dh]
  union _LARGE_INTEGER SectionOffset; // [rsp+60h] [rbp-59h] BYREF
  void *SectionHandle; // [rsp+68h] [rbp-51h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-49h] BYREF
  SIZE_T CommitSize; // [rsp+78h] [rbp-41h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-29h] BYREF
  union _LARGE_INTEGER v55; // [rsp+110h] [rbp+57h] BYREF
  SIZE_T NumberOfBytes; // [rsp+118h] [rbp+5Fh]
  char v57; // [rsp+120h] [rbp+67h]

  v57 = a4;
  LODWORD(NumberOfBytes) = a3;
  v55 = a2;
  v7 = BaseAddress;
  v8 = 0LL;
  v9 = 0;
  v10 = (unsigned int)a3;
  v11 = 0LL;
  v12 = a1;
  if ( !a1 || !BaseAddress || !(_DWORD)a3 )
  {
    LODWORD(v15) = -1073741811;
    v43 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdError)(
            a1,
            (union _LARGE_INTEGER)a2.QuadPart,
            a3);
    *(_QWORD *)(v43 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v43);
    goto LABEL_27;
  }
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 || *(_DWORD *)(v8 + 16) != 1953656900 || (unsigned int)(*(_DWORD *)(v8 + 20) - 2) > 1 )
  {
    LODWORD(v15) = -1073741811;
    v41 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdError)(
            a1,
            (union _LARGE_INTEGER)a2.QuadPart,
            a3);
    *(_QWORD *)(v41 + 24) = -1073741811LL;
    goto LABEL_43;
  }
  if ( KeGetCurrentIrql() )
  {
    v35 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdWarning)(
            a1,
            (union _LARGE_INTEGER)a2.QuadPart,
            a3);
    *(_QWORD *)(v35 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v35);
  }
  v13 = v57;
  *v7 = 0LL;
  LODWORD(v15) = DpiVerifyResources(v12, (unsigned int)&v55, v10, v13, (char)a5, (__int64)&a6, (__int64)v7);
  if ( (int)v15 >= 0 )
  {
    if ( !*v7 )
    {
      v48 = a6;
      if ( v57 == 1 )
      {
        v19 = v55;
        v9 = 0;
        *v7 = (PVOID)v55.QuadPart;
        goto LABEL_18;
      }
      v17 = 0;
      if ( (_BYTE)a5 != 1 )
      {
        v17 = 4;
        if ( !a6 || byte_1C00A2750 )
        {
          v17 = 516;
        }
        else if ( a6 != 1 )
        {
          if ( a6 == 2 )
          {
            v17 = 1028;
          }
          else
          {
            v40 = WdLogNewEntry5_WdError((unsigned int)(a6 - 1), v14, v16);
            *(_QWORD *)(v40 + 24) = v48;
            *(_QWORD *)(v40 + 32) = v8;
            WdLogEvent5_WdError(v40);
          }
        }
        v18 = v10;
        v19 = v55;
        v21 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmMapIoSpaceEx)(
                (union _LARGE_INTEGER)v55.QuadPart,
                v18,
                v17);
LABEL_16:
        *v7 = (PVOID)v21;
        v23 = (unsigned int)NumberOfBytes;
        if ( v21 )
        {
          v9 = 1;
          *(_DWORD *)(v8 + 2576) += ((v21 & 0xFFF) + (unsigned __int64)(unsigned int)NumberOfBytes + 4095) >> 12;
LABEL_18:
          PoolWithTag = (union _LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x74727044u);
          v11 = PoolWithTag;
          if ( !PoolWithTag )
          {
            LODWORD(v15) = -1073741801;
            v42 = WdLogNewEntry5_WdLowResource(v26, v25, v27, v28);
            *(_QWORD *)(v42 + 24) = -1073741801LL;
            WdLogEvent5_WdLowResource(v42);
LABEL_52:
            if ( v9 == 1 )
            {
              v46 = (unsigned int)NumberOfBytes;
              *(_DWORD *)(v8 + 2576) -= ((*(_DWORD *)v7 & 0xFFF) + (unsigned __int64)(unsigned int)NumberOfBytes + 4095) >> 12;
              v47 = *v7;
              if ( (_BYTE)a5 == 1 )
                ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v47);
              else
                MmUnmapIoSpace(v47, v46);
            }
            return (unsigned int)v15;
          }
          PoolWithTag[2].LowPart = 1953656900;
          PoolWithTag[2].HighPart = 8;
          PoolWithTag[3].LowPart = 1;
          PoolWithTag[4] = v19;
          PoolWithTag[5].LowPart = NumberOfBytes;
          BYTE4(PoolWithTag[5].QuadPart) = v57;
          BYTE5(PoolWithTag[5].QuadPart) = (_BYTE)a5;
          PoolWithTag[6].QuadPart = PsGetCurrentProcess(v26, v25);
          v11[7].LowPart = v48;
          v11[8].QuadPart = (LONGLONG)*v7;
          LOBYTE(v11[9].LowPart) = v9;
          KeWaitForSingleObject((PVOID)(v8 + 2520), Executive, 0, 0, 0LL);
          v29 = (union _LARGE_INTEGER **)(v8 + 2504);
          v30 = *(_QWORD *)(v8 + 2504);
          if ( *(_QWORD *)(v30 + 8) != v8 + 2504 )
            goto LABEL_55;
          v11->QuadPart = v30;
          v11[1].QuadPart = (LONGLONG)v29;
          *(_QWORD *)(v30 + 8) = v11;
          *v29 = v11;
          KeReleaseMutex((PRKMUTEX)(v8 + 2520), 0);
          v31 = 1;
          v33 = WdLogNewEntry5_WdEvent(v32);
          *(_QWORD *)(v33 + 24) = v11;
          WdLogEvent5_WdEvent(v33);
LABEL_21:
          if ( (int)v15 >= 0 )
            return (unsigned int)v15;
          if ( v31 != 1 )
            goto LABEL_50;
          KeWaitForSingleObject((PVOID)(v8 + 2520), Executive, 0, 0, 0LL);
          QuadPart = (_QWORD *)v11->QuadPart;
          if ( *(union _LARGE_INTEGER **)(v11->QuadPart + 8) == v11 )
          {
            v45 = (void **)v11[1].QuadPart;
            if ( *v45 == v11 )
            {
              *v45 = QuadPart;
              QuadPart[1] = v45;
              KeReleaseMutex((PRKMUTEX)(v8 + 2520), 0);
LABEL_50:
              if ( v11 )
                ExFreePoolWithTag(v11, 0x74727044u);
              goto LABEL_52;
            }
          }
LABEL_55:
          __fastfail(3u);
        }
        LODWORD(v15) = -1073741811;
        v41 = WdLogNewEntry5_WdError(0LL, v20, v22);
        *(_QWORD *)(v41 + 24) = v23;
        *(_QWORD *)(v41 + 32) = v17;
LABEL_43:
        WdLogEvent5_WdError(v41);
        return (unsigned int)v15;
      }
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
      SectionOffset.QuadPart = 0LL;
      CommitSize = v10;
      ViewSize = v10;
      RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v36 = ZwOpenSection(&SectionHandle, 0xF001Fu, &ObjectAttributes);
      v15 = v36;
      if ( v36 >= 0 )
      {
        v19 = v55;
        SectionOffset = v55;
        if ( byte_1C00A2750 == 1 || !v48 )
        {
          v17 = 512;
        }
        else if ( v48 == 2 )
        {
          v17 = 1024;
        }
        v15 = ZwMapViewOfSection(
                SectionHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                v7,
                0LL,
                CommitSize,
                &SectionOffset,
                &ViewSize,
                ViewUnmap,
                0,
                v17 | 4);
        ZwClose(SectionHandle);
        if ( (int)v15 >= 0 )
        {
          if ( v19.LowPart < SectionOffset.LowPart )
          {
            LODWORD(v15) = -1073741823;
            v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v20);
            v39[3] = 275LL;
            v39[4] = 21LL;
            v39[5] = -1073741823LL;
            WdLogEvent5_WdCriticalError(v39);
            return (unsigned int)v15;
          }
          LODWORD(NumberOfBytes) = SectionOffset.LowPart + ViewSize - v19.LowPart;
          v21 = (__int64)*v7 + v19.QuadPart - SectionOffset.QuadPart;
          goto LABEL_16;
        }
      }
      v38 = WdLogNewEntry5_WdError(v37, v20, v22);
      *(_QWORD *)(v38 + 24) = v15;
      WdLogEvent5_WdError(v38);
      v9 = 0;
    }
LABEL_27:
    v31 = 0;
    goto LABEL_21;
  }
  return (unsigned int)v15;
}
