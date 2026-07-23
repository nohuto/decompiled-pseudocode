/*
 * XREFs of NtGetCachedSigningLevel @ 0x1406D27E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     SeGetCachedSigningLevel @ 0x1406D2A30 (SeGetCachedSigningLevel.c)
 */

NTSTATUS __cdecl NtGetCachedSigningLevel(
        HANDLE File,
        PULONG Flags,
        PSE_SIGNING_LEVEL SigningLevel,
        PUCHAR Thumbprint,
        PULONG ThumbprintSize,
        PULONG ThumbprintAlgorithm)
{
  PVOID v10; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  int v12; // edi
  int v14; // eax
  char v15; // cl
  ULONG v16; // r14d
  void *v17; // rax
  _DWORD *v18; // r14
  _BYTE v19[4]; // [rsp+30h] [rbp-D8h] BYREF
  ULONG v20; // [rsp+34h] [rbp-D4h] BYREF
  SIZE_T Length; // [rsp+38h] [rbp-D0h] BYREF
  int v22; // [rsp+40h] [rbp-C8h]
  volatile void *Address; // [rsp+48h] [rbp-C0h]
  volatile void *v24; // [rsp+50h] [rbp-B8h]
  HANDLE Handle; // [rsp+58h] [rbp-B0h]
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  volatile void *v27; // [rsp+68h] [rbp-A0h]
  PVOID v28; // [rsp+70h] [rbp-98h]
  _BYTE Src[64]; // [rsp+80h] [rbp-88h] BYREF

  v24 = Thumbprint;
  Address = SigningLevel;
  Handle = File;
  v27 = ThumbprintAlgorithm;
  v10 = 0LL;
  memset(Src, 0, sizeof(Src));
  Length = 64LL;
  v20 = 0;
  v19[0] = 0;
  if ( File && Flags && SigningLevel )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v12 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
    v10 = Object;
    v28 = Object;
    if ( v12 >= 0 )
    {
      v14 = Thumbprint
          ? SeGetCachedSigningLevel(
              (_DWORD)Object,
              (unsigned int)&v20,
              (unsigned int)v19,
              (unsigned int)Src,
              (__int64)&Length,
              (__int64)&Length + 4)
          : SeGetCachedSigningLevel((_DWORD)Object, (unsigned int)&v20, (unsigned int)v19, 0, 0LL, 0LL);
      v12 = v14;
      if ( v14 >= 0 )
      {
        if ( PreviousMode == 1 )
        {
          ProbeForWrite(Flags, 4uLL, 4u);
          ProbeForWrite(Address, 1uLL, 1u);
        }
        v15 = v20;
        *Flags = v20;
        *(_BYTE *)Address = v19[0];
        if ( ThumbprintSize )
        {
          if ( PreviousMode == 1 )
          {
            ProbeForWrite(ThumbprintSize, 4uLL, 4u);
            v15 = v20;
          }
          if ( (v15 & 2) != 0 )
          {
            v16 = Length;
            if ( *ThumbprintSize >= (unsigned int)Length && (v17 = (void *)v24) != 0LL )
            {
              if ( PreviousMode == 1 )
              {
                ProbeForWrite(v24, (unsigned int)Length, 1u);
                v16 = Length;
                v17 = (void *)v24;
              }
              memmove(v17, Src, v16);
            }
            else
            {
              v12 = -1073741789;
              v22 = -1073741789;
            }
            *ThumbprintSize = v16;
            v18 = v27;
            if ( v27 )
            {
              if ( PreviousMode == 1 )
                ProbeForWrite(v27, 4uLL, 4u);
              *v18 = HIDWORD(Length);
            }
          }
          else
          {
            *ThumbprintSize = 0;
          }
        }
      }
    }
  }
  else
  {
    v12 = -1073741811;
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  return v12;
}
