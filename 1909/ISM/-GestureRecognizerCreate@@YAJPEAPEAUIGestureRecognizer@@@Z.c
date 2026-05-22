/*
 * XREFs of ?GestureRecognizerCreate@@YAJPEAPEAUIGestureRecognizer@@@Z @ 0x18010A3A4
 * Callers:
 *     ?Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z @ 0x18010314C (-Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??0GestureSession@@AEAA@XZ @ 0x180109EB8 (--0GestureSession@@AEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GestureRecognizerCreate(struct IGestureRecognizer **a1)
{
  unsigned int v2; // ebx
  GestureSession *v3; // rax
  GestureSession *v4; // rdi
  struct IGestureRecognizer *v5; // rax

  v2 = 0;
  *a1 = 0LL;
  v3 = (GestureSession *)malloc(0x4B0uLL);
  v4 = v3;
  if ( v3 )
    memset_0(v3, 0, 0x4B0uLL);
  if ( v4 )
    v5 = (struct IGestureRecognizer *)GestureSession::GestureSession(v4);
  else
    v5 = 0LL;
  if ( v5 )
    *a1 = v5;
  else
    return (unsigned int)-2147024882;
  return v2;
}
