/*
 * XREFs of SaveNodeDistanceInformation @ 0x1409DF6C4
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409C5788 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void SaveNodeDistanceInformation()
{
  __int64 v0; // rsi
  unsigned int v1; // ebx
  __int64 *v2; // rdi
  __int64 v3; // r8
  __int64 v4; // rax
  __int16 v5; // dx
  __int16 v6; // cx
  unsigned int v7; // eax
  unsigned int v8; // r14d
  unsigned __int64 *PoolWithTag; // rax
  unsigned __int64 *v10; // r12
  UNICODE_STRING *Class; // rdi
  int v12; // r8d
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  _DWORD *v18; // rax
  _DWORD *v19; // r13
  __int64 v20; // r10
  unsigned int v21; // r8d
  _DWORD *v22; // r15
  __int64 *v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rcx
  _WORD *v27; // rdi
  unsigned __int64 v28; // rcx
  unsigned __int64 *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // r8
  unsigned __int64 *v32; // rax
  unsigned __int64 v33; // rax
  __int64 *v34; // rdx
  unsigned __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 *v37; // r10
  __int64 v38; // rcx
  __int64 v39; // r11
  __int64 v40; // r9
  int v41; // r8d
  int v42; // ecx
  __int64 v43; // rdx
  __int64 *v44; // rdi
  __int64 v45; // r14
  unsigned __int16 v46; // ax
  int v47; // ecx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int16 v50; // ax
  unsigned int v51; // edx
  __int64 v52; // rax
  unsigned int v53; // r14d
  __int64 v54; // rbx
  char v55; // r10
  unsigned int v56; // r9d
  __int64 *v57; // r11
  int v58; // r8d
  int v59; // edx
  unsigned int v60; // edi
  int v61; // eax
  int v62; // r14d
  __int64 *v63; // r10
  __int64 v64; // r15
  __int64 v65; // r8
  unsigned __int16 v66; // ax
  __int64 v67; // rbx
  __int64 v68; // rdx
  __int64 *v69; // r11
  __int64 v70; // rax
  unsigned __int16 v71; // cx
  unsigned __int16 v72; // cx
  unsigned __int16 v73; // ax
  HANDLE KeyHandle; // [rsp+48h] [rbp-69h] BYREF
  ULONG DataSize; // [rsp+50h] [rbp-61h]
  _DWORD *v76; // [rsp+58h] [rbp-59h]
  __int64 *v77; // [rsp+60h] [rbp-51h]
  __int64 v78; // [rsp+68h] [rbp-49h]
  ULONG ResultLength; // [rsp+70h] [rbp-41h] BYREF
  UNICODE_STRING ValueName; // [rsp+78h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-19h] BYREF
  char KeyValueInformation[4]; // [rsp+C8h] [rbp+17h] BYREF
  int v84; // [rsp+CCh] [rbp+1Bh]
  int v85; // [rsp+D0h] [rbp+1Fh]
  unsigned int v86; // [rsp+D4h] [rbp+23h]

  KeyHandle = (HANDLE)-1LL;
  v0 = (unsigned __int16)KeNumberNodes;
  v1 = 0;
  if ( !KeNumberNodes )
    goto LABEL_8;
  v2 = KeNodeBlock;
  v3 = (unsigned __int16)KeNumberNodes;
  do
  {
    v4 = *v2++;
    v5 = *(_WORD *)(v4 + 146);
    v6 = *(_WORD *)(v4 + 148);
    v7 = v1 + 1;
    if ( v5 != v6 )
      v7 = v1;
    v1 = v7;
    --v3;
  }
  while ( v3 );
  if ( v7 != 1 )
  {
LABEL_8:
    v8 = (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes;
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, 8LL * (int)v8, 0x616D754Eu);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, KiActualNodeCost, 8LL * (int)v8);
      Class = 0LL;
      v12 = 0;
      if ( (_DWORD)v0 != 1 )
      {
        do
        {
          v13 = v12 + 1;
          v14 = v12 + 1;
          if ( v12 + 1 < (unsigned int)v0 )
          {
            v15 = v13 + (_DWORD)v0 * v12;
            do
            {
              v16 = v10[v15];
              if ( v16 != -1LL )
              {
                v17 = (v10[v12 + (unsigned int)v0 * v14] >> 1) + (v16 >> 1);
                v10[v15] = v17;
                v10[v12 + (unsigned int)v0 * v14] = v17;
              }
              ++v14;
              v15 = (unsigned int)(v15 + 1);
            }
            while ( v14 < (unsigned int)v0 );
          }
          ++v12;
        }
        while ( v13 < (int)v0 - 1 );
        Class = 0LL;
      }
      DataSize = 2 * v1 * (v1 + 2) + 4;
      v18 = ExAllocatePoolWithTag(PagedPool, DataSize, 0x2020654Bu);
      v19 = v18;
      if ( v18 )
      {
        v20 = v1 + 1;
        *v18 = v1;
        v21 = 1;
        v22 = &v18[v20];
        v76 = v22;
        if ( (_DWORD)v0 )
        {
          v23 = KeNodeBlock;
          v24 = v0;
          do
          {
            if ( *(_WORD *)(*v23 + 146) == *(_WORD *)(*v23 + 148) )
            {
              v25 = v21++;
              v18[v25] = *(_DWORD *)(*v23 + 160);
            }
            ++v23;
            --v24;
          }
          while ( v24 );
          Class = 0LL;
        }
        if ( v1 * v1 )
        {
          v26 = v1 * v1;
          v27 = &v18[v20];
          while ( v26 )
          {
            *v27++ = -1;
            --v26;
          }
          Class = 0LL;
        }
        v28 = 1LL;
        if ( v8 )
        {
          v29 = v10;
          v30 = v8;
          v31 = v8;
          do
          {
            if ( v28 < *v29 && *v29 != -1LL )
              v28 = *v29;
            ++v29;
            --v31;
          }
          while ( v31 );
          if ( v28 > 0x1000000000000LL )
          {
            v28 >>= 16;
            v32 = v10;
            do
            {
              if ( *v32 != -1LL )
                *v32 >>= 16;
              ++v32;
              --v30;
            }
            while ( v30 );
          }
          Class = 0LL;
        }
        v33 = 0x8000000000000000uLL / v28;
        if ( v8 )
        {
          v34 = (__int64 *)v10;
          Class = (UNICODE_STRING *)v8;
          do
          {
            if ( *v34 == -1 )
            {
              v36 = 0xFFFFLL;
            }
            else
            {
              v35 = v33 * *v34;
              *v34 = v35;
              v36 = HIWORD(v35);
            }
            *v34++ = v36;
            Class = (UNICODE_STRING *)((char *)Class - 1);
          }
          while ( Class );
        }
        if ( (_DWORD)v0 )
        {
          v37 = KeNodeBlock;
          v38 = v0;
          v77 = KeNodeBlock;
          v39 = v0;
          v78 = v0;
          do
          {
            v40 = *v37;
            if ( *(_WORD *)(*v37 + 146) == *(_WORD *)(*v37 + 148) )
            {
              v41 = (int)Class;
              v42 = (int)Class;
              if ( v1 )
              {
                while ( 1 )
                {
                  v43 = (unsigned int)(v42 + 1);
                  if ( v19[v43] == *(_DWORD *)(v40 + 160) )
                    break;
                  ++v42;
                  if ( (unsigned int)v43 >= v1 )
                    goto LABEL_55;
                }
                v41 = v1 * v42;
              }
LABEL_55:
              v44 = KeNodeBlock;
              v45 = v39;
              do
              {
                v46 = *(_WORD *)(*v44 + 146);
                if ( v46 == *(_WORD *)(*v44 + 148) )
                {
                  if ( v10[v46 + (unsigned int)v0 * *(unsigned __int16 *)(v40 + 146)] == 0xFFFF )
                  {
                    v22 = v76;
                  }
                  else
                  {
                    v47 = 0;
                    if ( v1 )
                    {
                      do
                      {
                        v48 = (unsigned int)(v47 + 1);
                        if ( v19[v48] == *(_DWORD *)(*v44 + 160) )
                          break;
                        ++v47;
                      }
                      while ( (unsigned int)v48 < v1 );
                    }
                    v49 = (unsigned int)(v41 + v47);
                    v50 = v10[v46 + (unsigned int)v0 * *(unsigned __int16 *)(v40 + 146)];
                    v22 = v76;
                    *((_WORD *)v76 + v49) = v50;
                    if ( !v50 )
                      *((_WORD *)v22 + v49) = 2;
                  }
                }
                ++v44;
                --v45;
              }
              while ( v45 );
              v37 = v77;
              v39 = v0;
              v38 = v78;
              Class = 0LL;
            }
            ++v37;
            --v38;
            v77 = v37;
            v78 = v38;
          }
          while ( v38 );
          LODWORD(v20) = v1 + 1;
        }
        v51 = (unsigned int)Class;
        if ( v1 )
        {
          do
          {
            v52 = v51 * (unsigned int)v20;
            ++v51;
            *((_WORD *)v22 + v52) = (_WORD)Class;
          }
          while ( v51 < v1 );
        }
        v53 = 10;
        RtlInitUnicodeString(&DestinationString, L"\\registry\\machine\\SYSTEM\\CurrentControlSet\\Control\\NUMA");
        RtlInitUnicodeString(&ValueName, L"Variation Threshold");
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = Class;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, Class, (ULONG)Class, (PULONG)&Class->Length) < 0 )
        {
          v54 = -1LL;
          KeyHandle = (HANDLE)-1LL;
        }
        else
        {
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &ValueName,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x14u,
                 &ResultLength) >= 0
            && v84 == 4
            && v85 == 4 )
          {
            v53 = v86;
            if ( v86 - 1 > 0x31 )
              v53 = 10;
          }
          v54 = (__int64)KeyHandle;
        }
        v55 = (char)Class;
        v56 = (unsigned int)Class;
        if ( (_DWORD)v0 )
        {
          v57 = KeNodeBlock;
          while ( 1 )
          {
            if ( *(_WORD *)(*v57 + 146) == *(_WORD *)(*v57 + 148) )
            {
              v58 = (int)Class;
              while ( 1 )
              {
                if ( *(_WORD *)(KeNodeBlock[v58] + 146) == *(_WORD *)(KeNodeBlock[v58] + 148) && v56 != v58 )
                {
                  v59 = v10[(unsigned int)v0 * v56 + v58];
                  v60 = *((_DWORD *)KeNodeDistance + v58 + v56 * (unsigned __int16)KeNumberNodes);
                  v61 = v60 - v59;
                  if ( (int)(v59 - v60) >= 0 )
                    v61 = v59 - v60;
                  if ( 100 * v61 / v53 > v60 )
                    break;
                }
                if ( ++v58 >= (unsigned int)v0 )
                  goto LABEL_90;
              }
              v55 = 1;
LABEL_90:
              LODWORD(Class) = 0;
              if ( v55 )
                break;
            }
            ++v56;
            ++v57;
            if ( v56 >= (unsigned int)v0 )
              goto LABEL_106;
          }
          if ( v54 != -1 )
          {
            RtlInitUnicodeString(&ValueName, L"Node Distance");
            ZwSetValueKey((HANDLE)v54, &ValueName, 0, 3u, v19, DataSize);
          }
          v62 = (unsigned __int16)KeNumberNodes;
          v63 = KeNodeBlock;
          v64 = v0;
          do
          {
            v65 = *v63;
            v66 = *(_WORD *)(*v63 + 148);
            if ( *(_WORD *)(*v63 + 146) != v66 )
              v65 = KeNodeBlock[v66];
            v67 = v64;
            v68 = (unsigned int)((_DWORD)Class * v62);
            v69 = KeNodeBlock;
            do
            {
              v70 = *v69;
              v71 = *(_WORD *)(*v69 + 148);
              if ( *(_WORD *)(*v69 + 146) != v71 )
                v70 = KeNodeBlock[v71];
              v72 = *(_WORD *)(v65 + 146);
              v73 = *(_WORD *)(v70 + 146);
              if ( v72 == v73 )
                *((_DWORD *)KeNodeDistance + v68) = 0;
              else
                *((_DWORD *)KeNodeDistance + v68) = v10[v73 + (unsigned int)v0 * v72];
              v68 = (unsigned int)(v68 + 1);
              ++v69;
              --v67;
            }
            while ( v67 );
            LODWORD(Class) = (_DWORD)Class + 1;
            ++v63;
            v64 = v0;
          }
          while ( (unsigned int)Class < (unsigned int)v0 );
        }
      }
LABEL_106:
      ExFreePoolWithTag(v10, 0);
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
    }
    if ( KeyHandle != (HANDLE)-1LL )
      ZwClose(KeyHandle);
  }
}
