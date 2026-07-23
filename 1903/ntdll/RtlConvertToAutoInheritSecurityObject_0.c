/*
 * XREFs of RtlConvertToAutoInheritSecurityObject_0 @ 0x1800E5B2C
 * Callers:
 *     RtlConvertToAutoInheritSecurityObject @ 0x1800D6CD0 (RtlConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlValidSecurityDescriptor @ 0x180014D00 (RtlValidSecurityDescriptor.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800E52F0 @ 0x1800E52F0 (sub_1800E52F0.c)
 */

NTSTATUS __cdecl RtlConvertToAutoInheritSecurityObject_0(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CurrentSecurityDescriptor,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
        GUID *ObjectType,
        BOOLEAN IsDirectoryObject,
        PGENERIC_MAPPING GenericMapping)
{
  void *v6; // r13
  GUID *v8; // rdi
  NTSTATUS v10; // edi
  __int16 v11; // cx
  char *v12; // rax
  char *v13; // rax
  unsigned __int16 *v14; // r15
  char *v15; // r8
  char *v16; // rax
  ACL *v17; // rdx
  ACL *v18; // rcx
  __int16 v19; // r12
  char *v20; // rax
  unsigned __int16 *v21; // rsi
  char *v22; // r8
  char *v23; // rax
  ACL *v24; // rdx
  ACL *v25; // rcx
  __int16 v26; // bx
  unsigned int v27; // r13d
  unsigned int v28; // ecx
  unsigned int v29; // r14d
  unsigned int v30; // r15d
  _QWORD *Heap; // rax
  void *v32; // r12
  char *v33; // rdi
  int v34; // ecx
  int v35; // ecx
  int v36; // r14d
  int v37; // ecx
  int v38; // ecx
  _DWORD *v39; // rbx
  char *v40; // rdi
  PVOID v41; // rbx
  char v43; // [rsp+58h] [rbp-29h]
  _DWORD *v44; // [rsp+60h] [rbp-21h] BYREF
  void *Src; // [rsp+68h] [rbp-19h]
  void *v46; // [rsp+70h] [rbp-11h]
  PVOID HeapHandle; // [rsp+78h] [rbp-9h]
  unsigned __int16 *v48; // [rsp+80h] [rbp-1h] BYREF
  unsigned __int16 *v49; // [rsp+88h] [rbp+7h] BYREF
  void *v50; // [rsp+90h] [rbp+Fh]
  char v51; // [rsp+E0h] [rbp+5Fh]

  v6 = 0LL;
  v48 = 0LL;
  v43 = 0;
  v8 = ObjectType;
  v49 = 0LL;
  HeapHandle = NtCurrentPeb()->ProcessHeap;
  v51 = 0;
  if ( !RtlValidSecurityDescriptor(CurrentSecurityDescriptor) )
    goto LABEL_2;
  v11 = *((_WORD *)CurrentSecurityDescriptor + 1);
  if ( v11 >= 0 )
  {
    v12 = (char *)*((_QWORD *)CurrentSecurityDescriptor + 1);
  }
  else
  {
    if ( !*((_DWORD *)CurrentSecurityDescriptor + 1) )
    {
LABEL_2:
      v10 = -1073741703;
      goto LABEL_117;
    }
    v12 = (char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 1);
  }
  v50 = v12;
  if ( !v12 )
    goto LABEL_2;
  if ( v11 >= 0 )
  {
    v13 = (char *)*((_QWORD *)CurrentSecurityDescriptor + 2);
  }
  else
  {
    if ( !*((_DWORD *)CurrentSecurityDescriptor + 2) )
    {
      v46 = 0LL;
      goto LABEL_14;
    }
    v13 = (char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 2);
  }
  v46 = v13;
LABEL_14:
  if ( (v11 & 0x10) == 0 )
    goto LABEL_47;
  if ( v11 >= 0 )
  {
    v14 = (unsigned __int16 *)*((_QWORD *)CurrentSecurityDescriptor + 3);
  }
  else
  {
    if ( !*((_DWORD *)CurrentSecurityDescriptor + 3) )
      goto LABEL_47;
    v14 = (unsigned __int16 *)((char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 3));
  }
  Src = v14;
  if ( v14 )
  {
    if ( (v11 & 0x800) != 0 || (v11 & 0x2000) != 0 || !ParentDescriptor )
    {
      v19 = v11 & 0x2010 | 0x800;
      goto LABEL_57;
    }
    if ( v11 >= 0 )
    {
      v15 = (char *)*((_QWORD *)CurrentSecurityDescriptor + 2);
    }
    else if ( *((_DWORD *)CurrentSecurityDescriptor + 2) )
    {
      v15 = (char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 2);
    }
    else
    {
      v15 = 0LL;
    }
    if ( v11 >= 0 )
    {
      v16 = (char *)*((_QWORD *)CurrentSecurityDescriptor + 1);
    }
    else if ( *((_DWORD *)CurrentSecurityDescriptor + 1) )
    {
      v16 = (char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 1);
    }
    else
    {
      v16 = 0LL;
    }
    if ( v11 >= 0 )
    {
      v17 = (ACL *)*((_QWORD *)CurrentSecurityDescriptor + 3);
    }
    else if ( *((_DWORD *)CurrentSecurityDescriptor + 3) )
    {
      v17 = (ACL *)((char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 3));
    }
    else
    {
      v17 = 0LL;
    }
    if ( (*((_BYTE *)ParentDescriptor + 2) & 0x10) == 0 )
      goto LABEL_39;
    if ( *((__int16 *)ParentDescriptor + 1) >= 0 )
    {
      v18 = (ACL *)*((_QWORD *)ParentDescriptor + 3);
      goto LABEL_44;
    }
    if ( *((_DWORD *)ParentDescriptor + 3) )
      v18 = (ACL *)((char *)ParentDescriptor + *((unsigned int *)ParentDescriptor + 3));
    else
LABEL_39:
      v18 = 0LL;
LABEL_44:
    v10 = sub_1800E52F0(
            v18,
            v17,
            (__int64)v8,
            IsDirectoryObject,
            (__int64)v16,
            (__int64)v15,
            GenericMapping,
            (PVOID *)&v48,
            &v44);
    if ( v10 < 0 )
      goto LABEL_117;
    v11 = *((_WORD *)CurrentSecurityDescriptor + 1);
    v8 = ObjectType;
    v43 = 1;
    v19 = 2 * ((unsigned __int16)v44 & 0x1400 | (2 * ((unsigned __int8)v44 & 8 | 4)));
    goto LABEL_56;
  }
LABEL_47:
  v19 = v11 & 0x2010 | 0x800;
  if ( !ParentDescriptor )
  {
    v20 = 0LL;
LABEL_54:
    if ( v20 )
      v19 = v11 & 0x10 | 0x2800;
    goto LABEL_56;
  }
  if ( (*((_BYTE *)ParentDescriptor + 2) & 0x10) == 0 )
    goto LABEL_56;
  if ( *((__int16 *)ParentDescriptor + 1) >= 0 )
  {
    v20 = (char *)*((_QWORD *)ParentDescriptor + 3);
    goto LABEL_54;
  }
  if ( *((_DWORD *)ParentDescriptor + 3) )
  {
    v20 = (char *)ParentDescriptor + *((unsigned int *)ParentDescriptor + 3);
    goto LABEL_54;
  }
LABEL_56:
  v14 = v48;
  Src = v48;
LABEL_57:
  if ( (v11 & 4) == 0 )
    goto LABEL_90;
  if ( v11 < 0 )
  {
    if ( *((_DWORD *)CurrentSecurityDescriptor + 4) )
    {
      v21 = (unsigned __int16 *)((char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 4));
      goto LABEL_62;
    }
LABEL_90:
    v26 = v11 & 4 | 0x1400;
    goto LABEL_91;
  }
  v21 = (unsigned __int16 *)*((_QWORD *)CurrentSecurityDescriptor + 4);
LABEL_62:
  if ( !v21 )
    goto LABEL_90;
  if ( (v11 & 0x400) != 0 || (v11 & 0x1000) != 0 || !ParentDescriptor )
  {
    v26 = v11 & 0x1004 | 0x400;
LABEL_92:
    v27 = (4 * *((unsigned __int8 *)v50 + 1) + 11) & 0xFFFFFFFC;
    if ( v46 )
      v28 = (4 * *((unsigned __int8 *)v46 + 1) + 11) & 0xFFFFFFFC;
    else
      v28 = 0;
    if ( v14 )
      v29 = (v14[1] + 3) & 0xFFFFFFFC;
    else
      v29 = 0;
    if ( v21 )
      v30 = (v21[1] + 3) & 0xFFFFFFFC;
    else
      v30 = 0;
    Heap = RtlAllocateHeap(HeapHandle, Flags + 1310720, v28 + v30 + v29 + v27 + 20);
    v44 = Heap;
    if ( Heap )
    {
      v33 = (char *)Heap + 20;
      *Heap = 0LL;
      Heap[1] = 0LL;
      *((_DWORD *)Heap + 4) = 0;
      *(_BYTE *)Heap = 1;
      *((_WORD *)Heap + 1) |= v19 | 0x8000;
      v32 = Src;
      if ( Src )
      {
        memmove((char *)Heap + 20, Src, *((unsigned __int16 *)Src + 1));
        v34 = (int)v33;
        v33 += v29;
        Heap = v44;
        v35 = v34 - (_DWORD)v44;
      }
      else
      {
        v35 = 0;
      }
      *((_DWORD *)Heap + 3) = v35;
      v36 = (int)Heap;
      *((_WORD *)Heap + 1) |= v26;
      if ( v21 )
      {
        memmove(v33, v21, v21[1]);
        v37 = (int)v33;
        v33 += v30;
        Heap = v44;
        v38 = v37 - v36;
      }
      else
      {
        v38 = 0;
      }
      *((_DWORD *)Heap + 4) = v38;
      memmove(v33, v50, 4LL * *((unsigned __int8 *)v50 + 1) + 8);
      v39 = v44;
      v44[1] = (_DWORD)v33 - v36;
      v40 = &v33[v27];
      if ( v46 )
      {
        memmove(v40, v46, 4LL * *((unsigned __int8 *)v46 + 1) + 8);
        v39[2] = (_DWORD)v40 - v36;
      }
      v10 = 0;
    }
    else
    {
      v32 = Src;
      v10 = -1073741801;
    }
    v41 = HeapHandle;
    if ( v51 )
      RtlFreeHeap(HeapHandle, 0, v21);
    v6 = v44;
    goto LABEL_115;
  }
  if ( v11 >= 0 )
  {
    v22 = (char *)*((_QWORD *)CurrentSecurityDescriptor + 2);
  }
  else if ( *((_DWORD *)CurrentSecurityDescriptor + 2) )
  {
    v22 = (char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 2);
  }
  else
  {
    v22 = 0LL;
  }
  if ( v11 >= 0 )
  {
    v23 = (char *)*((_QWORD *)CurrentSecurityDescriptor + 1);
  }
  else if ( *((_DWORD *)CurrentSecurityDescriptor + 1) )
  {
    v23 = (char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 1);
  }
  else
  {
    v23 = 0LL;
  }
  if ( v11 >= 0 )
  {
    v24 = (ACL *)*((_QWORD *)CurrentSecurityDescriptor + 4);
  }
  else if ( *((_DWORD *)CurrentSecurityDescriptor + 4) )
  {
    v24 = (ACL *)((char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 4));
  }
  else
  {
    v24 = 0LL;
  }
  if ( (*((_BYTE *)ParentDescriptor + 2) & 4) == 0 )
    goto LABEL_82;
  if ( *((__int16 *)ParentDescriptor + 1) >= 0 )
  {
    v25 = (ACL *)*((_QWORD *)ParentDescriptor + 4);
  }
  else
  {
    if ( !*((_DWORD *)ParentDescriptor + 4) )
    {
LABEL_82:
      v25 = 0LL;
      goto LABEL_87;
    }
    v25 = (ACL *)((char *)ParentDescriptor + *((unsigned int *)ParentDescriptor + 4));
  }
LABEL_87:
  v10 = sub_1800E52F0(
          v25,
          v24,
          (__int64)v8,
          IsDirectoryObject,
          (__int64)v23,
          (__int64)v22,
          GenericMapping,
          (PVOID *)&v49,
          &v44);
  if ( v10 >= 0 )
  {
    v51 = 1;
    v26 = (unsigned __int16)v44 & 0x1408 | 4;
LABEL_91:
    v21 = v49;
    goto LABEL_92;
  }
  v32 = Src;
  v41 = HeapHandle;
LABEL_115:
  if ( v43 )
    RtlFreeHeap(v41, 0, v32);
LABEL_117:
  *NewSecurityDescriptor = v6;
  return v10;
}
