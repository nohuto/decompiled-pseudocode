/*
 * XREFs of LdrpResSearchResourceHandle @ 0x1800E2B8C
 * Callers:
 *     LdrResSearchResource @ 0x180056800 (LdrResSearchResource.c)
 * Callees:
 *     RtlLcidToLocaleName @ 0x180016AF0 (RtlLcidToLocaleName.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x180057680 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrResFallbackLangList @ 0x1800589F0 (LdrResFallbackLangList.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0910 (LdrpTraceLoadMUIDll.c)
 *     LdrpResFileSize @ 0x1800E25F0 (LdrpResFileSize.c)
 *     LdrpResReadFile @ 0x1800E2AD8 (LdrpResReadFile.c)
 *     LdrpResSetFilePointer @ 0x1800E328C (LdrpResSetFilePointer.c)
 */

int __fastcall LdrpResSearchResourceHandle(
        char *Handle,
        int a2,
        __int64 *a3,
        unsigned int a4,
        unsigned __int64 *a5,
        _QWORD *a6,
        void *a7,
        __int64 a8)
{
  __int16 v8; // di
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rcx
  int v14; // ebx
  int result; // eax
  int File; // edi
  PVOID Heap; // rax
  unsigned int v18; // edi
  unsigned int v19; // ebx
  int v20; // ecx
  unsigned __int16 v21; // cx
  unsigned int v22; // r15d
  ULONG v23; // r14d
  _DWORD *v24; // rbx
  int v25; // edx
  unsigned int v26; // ecx
  unsigned __int64 v27; // r14
  char *v28; // r15
  _DWORD *v29; // r15
  __int64 v30; // r14
  int v31; // [rsp+70h] [rbp-4C8h]
  unsigned __int16 v32; // [rsp+74h] [rbp-4C4h] BYREF
  void *v33[2]; // [rsp+78h] [rbp-4C0h] BYREF
  int v34; // [rsp+88h] [rbp-4B0h]
  unsigned int v35; // [rsp+8Ch] [rbp-4ACh]
  int v36; // [rsp+90h] [rbp-4A8h]
  __int64 v37; // [rsp+98h] [rbp-4A0h] BYREF
  HANDLE Handlea; // [rsp+A0h] [rbp-498h]
  __int64 *v39; // [rsp+A8h] [rbp-490h]
  void *v40; // [rsp+B0h] [rbp-488h]
  _QWORD *v41; // [rsp+B8h] [rbp-480h]
  unsigned __int64 *v42; // [rsp+C0h] [rbp-478h]
  __int64 v43; // [rsp+C8h] [rbp-470h]
  int v44; // [rsp+D0h] [rbp-468h] BYREF
  const wchar_t *v45; // [rsp+D8h] [rbp-460h]
  _UNICODE_STRING LocaleName; // [rsp+E0h] [rbp-458h] BYREF
  int v47; // [rsp+F0h] [rbp-448h] BYREF
  __int16 v48; // [rsp+F4h] [rbp-444h]
  unsigned __int16 v49; // [rsp+F6h] [rbp-442h]
  unsigned __int16 v50; // [rsp+104h] [rbp-434h]
  __int16 v51; // [rsp+108h] [rbp-430h]
  unsigned int v52; // [rsp+164h] [rbp-3D4h]
  unsigned int v53; // [rsp+174h] [rbp-3C4h]
  unsigned int v54; // [rsp+178h] [rbp-3C0h]
  int v55; // [rsp+17Ch] [rbp-3BCh]
  unsigned int v56; // [rsp+188h] [rbp-3B0h]
  int v57; // [rsp+18Ch] [rbp-3ACh]
  __int16 v58[30]; // [rsp+200h] [rbp-338h] BYREF
  unsigned int v59; // [rsp+23Ch] [rbp-2FCh]
  unsigned __int16 v60[264]; // [rsp+240h] [rbp-2F8h] BYREF
  _WORD Src[88]; // [rsp+450h] [rbp-E8h] BYREF

  v35 = a4;
  v39 = a3;
  v8 = a2;
  v34 = a2;
  Handlea = Handle;
  v42 = a5;
  v41 = a6;
  v40 = a7;
  v43 = a8;
  LODWORD(v33[0]) = 4456514;
  v33[1] = L"LdrpResSearchResourceHandle Enter";
  v44 = 4325440;
  v45 = L"LdrpResSearchResourceHandle Exit";
  memset(Src, 0, 0xACuLL);
  v10 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v11 = 2147353477LL;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    v12 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v13 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v33, *(unsigned __int8 *)v13);
  }
  else
  {
    v12 = 2147353476LL;
  }
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    File = -1073741811;
    v31 = -1073741811;
    Heap = 0LL;
    goto LABEL_56;
  }
  v14 = v8 & 0x1000;
  v36 = v14;
  result = LdrpResFileSize(Handle, &v37);
  if ( result < 0 && (v8 & 0x1000) != 0 )
    return result;
  result = LdrpResReadFile(Handle, 0LL, v58, 0x40u);
  if ( result < 0 )
    return result;
  if ( v58[0] != 23117 )
    goto LABEL_15;
  v18 = v59;
  if ( v14 )
  {
    if ( (unsigned __int64)v59 + 264 < v59 )
      goto LABEL_15;
    if ( v59 > 0x10000000 )
      goto LABEL_15;
    if ( v59 + 264 < v59 )
      goto LABEL_15;
    v19 = v37;
    if ( (unsigned __int64)v59 + 264 >= (unsigned int)v37 )
      goto LABEL_15;
  }
  else
  {
    v19 = v37;
  }
  result = LdrpResReadFile(Handle, v59, &v47, 0x108u);
  if ( result < 0 )
    return result;
  if ( v47 != 17744 )
    goto LABEL_15;
  if ( v51 == 267 )
  {
    if ( v48 != 332 )
    {
      if ( (unsigned __int16)(v48 - 448) > 4u )
        goto LABEL_15;
      v20 = 21;
      if ( !_bittest(&v20, (unsigned __int16)(v48 - 448)) )
        goto LABEL_15;
    }
    if ( v52 > 2 && v55 )
    {
      v21 = v50;
      if ( v50 >= 0x78u )
      {
        v22 = v54;
        goto LABEL_35;
      }
      goto LABEL_15;
    }
LABEL_31:
    File = -1073741687;
    goto LABEL_16;
  }
  if ( v51 != 523 || v48 != 512 && v48 != -31132 )
    goto LABEL_15;
  if ( v53 <= 2 || !v57 )
    goto LABEL_31;
  v21 = v50;
  if ( v50 >= 0x88u )
  {
    v22 = v56;
LABEL_35:
    if ( !v22 )
      return -1073741687;
    if ( !v49 )
      goto LABEL_15;
    v23 = 40 * v49;
    if ( v18 + v23 + v21 + 24 > v19 )
      goto LABEL_15;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v23);
    v33[0] = Heap;
    if ( !Heap )
    {
      File = -1073741801;
      v31 = -1073741801;
      goto LABEL_56;
    }
    File = LdrpResReadFile((char *)Handlea, v50 + v18 + 24, v33[0], v23);
    v31 = File;
    if ( File >= 0 )
    {
      v24 = v33[0];
      v25 = 0;
      if ( v49 )
      {
        do
        {
          v26 = v24[3];
          if ( v22 >= v26 && v22 < v24[4] + v26 )
            break;
          v24 += 10;
          ++v25;
        }
        while ( v25 < v49 );
      }
      if ( v25 < v49 && (v27 = v22 + (unsigned int)v24[5] - (unsigned __int64)(unsigned int)v24[3]) != 0 )
      {
        v28 = (char *)Handlea;
        File = LdrpResSetFilePointer(Handlea, v27);
        v31 = File;
        if ( File >= 0 )
        {
          if ( v35 == 3 )
          {
            v60[0] = 0;
            if ( (v34 & 0x20) != 0 )
            {
              v60[0] = 1;
              v60[2] = 0;
            }
            else
            {
              File = LdrResFallbackLangList(0LL, 0, *((_WORD *)v39 + 8), v34, v60);
              v31 = File;
              if ( File < 0 && v36 )
                goto LABEL_55;
            }
          }
          v32 = 0;
          File = LdrpResSearchResourceInsideDirectory(
                   0LL,
                   v28,
                   (unsigned int)v37,
                   v27,
                   (__int64)&v47,
                   (__int64)v24,
                   v39,
                   v35,
                   (__int64)v60,
                   v42,
                   v41,
                   v34,
                   &v32);
          v31 = File;
          if ( File >= 0 )
          {
            v29 = (_DWORD *)v43;
            if ( v43 )
            {
              if ( !v32 )
              {
                Src[0] = 0;
                LODWORD(v30) = 0;
                goto LABEL_80;
              }
              LocaleName.Buffer = Src;
              LocaleName.MaximumLength = 172;
              File = RtlLcidToLocaleName(v32, &LocaleName, 2u, 0);
              v31 = File;
              if ( File >= 0 )
              {
                v30 = -1LL;
                do
                  ++v30;
                while ( Src[v30] );
LABEL_80:
                if ( (unsigned int)v30 < *v29 && v40 )
                {
                  memmove(v40, Src, 2LL * (unsigned int)v30);
                  *v29 = v30 + 1;
                  *((_WORD *)v40 + (unsigned int)v30) = 0;
                  Heap = v33[0];
                }
                else
                {
                  *v29 = v30 + 1;
                  File = -1073741789;
                  v31 = -1073741789;
                  Heap = v33[0];
                }
                goto LABEL_56;
              }
            }
          }
        }
      }
      else
      {
        File = -1073741701;
        v31 = -1073741701;
      }
    }
LABEL_55:
    Heap = v33[0];
    goto LABEL_56;
  }
LABEL_15:
  File = -1073741701;
LABEL_16:
  v31 = File;
  Heap = 0LL;
LABEL_56:
  if ( Heap )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    File = v31;
  }
  if ( RtlGetCurrentServiceSessionId() )
  {
    v10 = (__int64)NtCurrentPeb()->SharedData + 555;
    File = v31;
  }
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
      File = v31;
    }
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v44, *(unsigned __int8 *)v12);
  }
  return File;
}
