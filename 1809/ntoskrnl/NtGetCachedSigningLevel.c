/*
 * XREFs of NtGetCachedSigningLevel @ 0x1406B28E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     SeGetCachedSigningLevel @ 0x1406B2B60 (SeGetCachedSigningLevel.c)
 */

NTSTATUS __cdecl NtGetCachedSigningLevel(
        HANDLE File,
        PULONG Flags,
        PSE_SIGNING_LEVEL SigningLevel,
        PUCHAR Thumbprint,
        PULONG ThumbprintSize,
        PULONG ThumbprintAlgorithm)
{
  PVOID v10; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  int v12; // ebx
  int CachedSigningLevel; // r14d
  _DWORD *v14; // rbx
  char v15; // cl
  ULONG v16; // r14d
  void *v17; // rbx
  _DWORD *v18; // r14
  char v20; // [rsp+30h] [rbp-D8h] BYREF
  int v21; // [rsp+34h] [rbp-D4h] BYREF
  SIZE_T Length; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h]
  int v24; // [rsp+48h] [rbp-C0h]
  volatile void *Address; // [rsp+50h] [rbp-B8h]
  volatile void *v26; // [rsp+58h] [rbp-B0h]
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  volatile void *v28; // [rsp+68h] [rbp-A0h]
  volatile void *v29; // [rsp+70h] [rbp-98h]
  PVOID v30; // [rsp+78h] [rbp-90h]
  _BYTE Src[64]; // [rsp+80h] [rbp-88h] BYREF

  v28 = Thumbprint;
  v26 = SigningLevel;
  Address = Flags;
  Handle = File;
  v29 = ThumbprintAlgorithm;
  v10 = 0LL;
  memset(Src, 0, sizeof(Src));
  Length = 64LL;
  v21 = 0;
  v20 = 0;
  if ( File && Flags && SigningLevel )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v12 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
    v10 = Object;
    v30 = Object;
    if ( v12 >= 0 )
    {
      CachedSigningLevel = SeGetCachedSigningLevel(
                             (_DWORD)Object,
                             (unsigned int)&v21,
                             (unsigned int)&v20,
                             (unsigned __int64)Src & -(__int64)(Thumbprint != 0LL),
                             (unsigned __int64)&Length & -(__int64)(Thumbprint != 0LL),
                             ((unsigned __int64)&Length + 4) & ((unsigned __int128)-(__int128)(unsigned __int64)Thumbprint >> 64));
      LODWORD(Handle) = CachedSigningLevel;
      v12 = CachedSigningLevel;
      if ( CachedSigningLevel >= 0 )
      {
        v14 = Address;
        if ( PreviousMode == 1 )
        {
          ProbeForWrite(Address, 4uLL, 4u);
          ProbeForWrite(v26, 1uLL, 1u);
        }
        v15 = v21;
        *v14 = v21;
        *(_BYTE *)v26 = v20;
        v12 = CachedSigningLevel;
        if ( ThumbprintSize )
        {
          if ( PreviousMode == 1 )
          {
            ProbeForWrite(ThumbprintSize, 4uLL, 4u);
            v15 = v21;
          }
          if ( (v15 & 2) != 0 )
          {
            v16 = Length;
            if ( *ThumbprintSize >= (unsigned int)Length && (v17 = (void *)v28) != 0LL )
            {
              if ( PreviousMode == 1 )
              {
                ProbeForWrite(v28, (unsigned int)Length, 1u);
                v16 = Length;
              }
              memmove(v17, Src, v16);
              v12 = (int)Handle;
            }
            else
            {
              v12 = -1073741789;
              v24 = -1073741789;
            }
            *ThumbprintSize = v16;
            v18 = v29;
            if ( v29 )
            {
              if ( PreviousMode == 1 )
                ProbeForWrite(v29, 4uLL, 4u);
              *v18 = HIDWORD(Length);
            }
          }
          else
          {
            *ThumbprintSize = 0;
            v12 = CachedSigningLevel;
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
